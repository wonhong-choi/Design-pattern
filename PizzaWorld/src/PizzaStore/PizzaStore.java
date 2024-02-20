package PizzaStore;

import Pizza.Pizza;
// import Factories.SimplePizzaFactory;

// public class PizzaStore {
//     SimplePizzaFactory factory;

//     public PizzaStore(SimplePizzaFactory simplePizzaFactory) {
//         factory = simplePizzaFactory;
//     }

//     public Pizza orderPizza(String type){
//         Pizza pizza = factory.createPizza(type);
        
//         pizza.prepare();
//         pizza.bake();
//         pizza.cut();
//         pizza.box();

//         return pizza;
//     }
// }


public abstract class PizzaStore {
    public Pizza orderPizza(String type){
        Pizza pizza = createPizza(type);

        pizza.prepare();
        pizza.bake();
        pizza.cut();
        pizza.box();

        return pizza;
    }

    abstract Pizza createPizza(String type);
}