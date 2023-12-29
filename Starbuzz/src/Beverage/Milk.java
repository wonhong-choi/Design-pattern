package Beverage;

public class Milk extends CondimentDecorator{

    public Milk(Beverage beverage){
        super.beverage = beverage;
    }

    @Override
    public String getDescription() {
        return beverage.getDescription() + ", Milk";
    }

    @Override
    public float cost() {
        return beverage.cost() + .10f;
    }
    
}
