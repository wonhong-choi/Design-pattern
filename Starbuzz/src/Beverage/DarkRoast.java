package Beverage;

public class DarkRoast extends Beverage {

    public DarkRoast(){
        description = "DarkRoast";
    }

    @Override
    public float cost() {
        return .99f;
    }
    
}
