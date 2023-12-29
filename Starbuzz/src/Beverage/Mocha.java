package Beverage;

public class Mocha extends CondimentDecorator{

    public Mocha(Beverage beverage){
        super.beverage = beverage;
    }

    @Override
    public String getDescription() {
        return beverage.getDescription() + ", Mocha";
    }

    @Override
    public float cost() {
        return beverage.cost() + .20f;
    }
    
}
