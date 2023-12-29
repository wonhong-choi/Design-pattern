package Beverage;

public class Whip extends CondimentDecorator{

    public Whip(Beverage beverage){
        super.beverage = beverage;
    }

    @Override
    public String getDescription() {
        return beverage.getDescription() + ", Whip";
    }

    @Override
    public float cost() {
        return beverage.cost() + .10f;
    }
    
}
