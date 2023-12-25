package Duck;

import FlyBehavior.NoFly;
import QuackBehavior.Quack;

public class ModelDuck extends Duck{
    public ModelDuck(){
        this.flyBehavior = new NoFly();
        this.quackBehavior = new Quack(); 
    }

    @Override
    public void display() {
        System.out.println("I'm Model Duck");
    }
    
}
