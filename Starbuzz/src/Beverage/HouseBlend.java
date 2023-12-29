package Beverage;

public class HouseBlend extends Beverage {

    public HouseBlend(){
        description = "HouseBlend";
    }

    @Override
    public float cost() {
        return .89f;
    }
    
}
