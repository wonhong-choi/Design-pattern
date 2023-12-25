import Duck.Duck;
import Duck.MallardDuck;
import Duck.ModelDuck;
import FlyBehavior.FlyRocketPowered;
import FlyBehavior.NoFly;

public class MiniDuckSimulator {
    public static void main(String[] args) {
        Duck mallardDuck = new MallardDuck();
        mallardDuck.display();
        mallardDuck.swim();

        mallardDuck.performFly();
        mallardDuck.performQuack();


        mallardDuck.setFlyBehavior(new NoFly());
        mallardDuck.performFly();

        Duck modelDuck = new ModelDuck();

        modelDuck.performFly();
        modelDuck.setFlyBehavior(new FlyRocketPowered());
        modelDuck.performFly();
    }
}
