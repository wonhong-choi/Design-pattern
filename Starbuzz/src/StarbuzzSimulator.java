import javax.naming.ldap.SortKey;

import Beverage.Beverage;
import Beverage.Decaf;
import Beverage.Espresso;
import Beverage.HouseBlend;
import Beverage.Milk;
import Beverage.Mocha;
import Beverage.Soy;
import Beverage.Whip;

public class StarbuzzSimulator {
    public static void main(String[] args) {
        Beverage bev = new Espresso();
        System.out.println(bev.getDescription() + " " + Float.toString(bev.cost()));

        Beverage bev2 = new Decaf();
        bev2 = new Mocha(bev2);
        bev2 = new Mocha(bev2);
        bev2 = new Whip(bev2);
        System.out.println(bev2.getDescription() + Float.toString(bev2.cost()));
        
        Beverage bev3 = new HouseBlend();
        bev3 = new Soy(bev3);
        bev3 = new Mocha(bev3);
        bev3 = new Whip(bev3);
        System.out.println(bev3.getDescription() + Float.toString(bev3.cost()));

    }
}
