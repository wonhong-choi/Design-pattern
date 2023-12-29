package Beverage;

public class Soy extends CondimentDecorator{

    public Soy(Beverage beverage){
        super.beverage = beverage;
    }

    @Override
    public String getDescription() {
        return beverage.getDescription() + ", Soy";
    }

    @Override
    public float cost() {
        return beverage.cost() + .15f;
    }
    
}
