public class MapView extends UpdateView<MapView> {
    private final LeafletMap map;
    
    public MapView()
    {
        map = new LeafletMap();
        
        //...
        
        map.addMarkersAndZoom( // Add all known markers to the map
                MQTTService.getInstance().getAll());
        
        setUpdateFunction(view -> {
            view.map.removeAllMarkers();
            MQTTService.getInstance().getAll().forEach(view.map::addMarker);
        });
    }
}
