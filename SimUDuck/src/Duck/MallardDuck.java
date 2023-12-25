package Duck;

import FlyBehavior.FlyWithWings;
import QuackBehavior.Quack;

public class MallardDuck extends Duck{

    public MallardDuck(){
        this.flyBehavior = new FlyWithWings();
        this.quackBehavior = new Quack();
    }
    
    @Override
    public void display() {
        System.out.println("I'm a Mallard Duck.");
    }
    
}
