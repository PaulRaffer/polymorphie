public class ListView extends UpdateView<ListView> {

    private final Grid<TTNUplinkMessage<Wristband>> grid =
            new Grid<>((Class<TTNUplinkMessage<Wristband>>)(Class)
                    TTNUplinkMessage.class);

    public ListView()
    {
        //...
        
        setUpdateFunction(view ->
                grid.getDataProvider().refreshAll());
    }
}
