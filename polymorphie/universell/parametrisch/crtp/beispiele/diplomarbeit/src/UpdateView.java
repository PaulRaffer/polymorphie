// Derive from this Class using the
// Curiously recurring template pattern!
// https://en.wikipedia.org/wiki/Curiously_recurring_template_pattern
// e.g. public class MyView extends UpdateView<MyView> { ... }
public class UpdateView<View> extends VerticalLayout {
    private UpdateThread updateThread;      // Background thread, which updates the view
    private UpdateFunction updateFunction;  // Function, which updates the view
    private long pauseMillis = 2000;        // Update every 2 s

    public interface UpdateFunction<View> { // Lambda interface
        void update(View view);             // Update object of subclass
    }
    protected void setUpdateFunction(UpdateFunction<View> f)
    {
        updateFunction = f;
    }
    protected void setUpdatePause(long millis)
    {
        pauseMillis = millis;
    }

    @Override
    protected void onAttach(AttachEvent e)
    {
        updateThread = new UpdateThread(e.getUI(), this); // this wird an Thread übergeben
        updateThread.start(); // Start new thread
    }

    @Override
    protected void onDetach(DetachEvent e)
    {
        updateThread.interrupt();  // Stop thread
        updateThread = null;
    }

    private class UpdateThread extends Thread {
        private final UI ui;
        private final UpdateView view;

        public UpdateThread(
                final UI ui, final UpdateView view)
        {
            this.ui = ui;
            this.view = view;
        }

        @Override
        public void run()
        {
            try {
                while (true) {
                    Thread.sleep(view.pauseMillis); // Wait
                    ui.access(() -> { // Lock session
                        
                        // 'view' wird von Typ 'UpdateView' (diese Klasse == Basisklasse)
                        // zu 'View' (Typ-Parameter == abgeleitete Klasse) umgewandelt!
                        // Dies ist ok, da wir das CRTP verwenden!
                        updateFunction.update(view); 
                        
                    });
                }
            }
            catch (InterruptedException e) {
                // We don't care if sleep was interrupted.
            }
        }
    }
}
