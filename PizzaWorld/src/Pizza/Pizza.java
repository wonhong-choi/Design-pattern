package Pizza;

import java.util.ArrayList;
import java.util.List;

public abstract class Pizza {

    String name;
    String dough;
    String sauce;
    List<String> toppings = new ArrayList<String>();

    public String getName(){
        return name;
    }

    public void prepare() {
        
    }

    public void bake() {

    }

    public void cut() {

    }

    public void box() {

    }
    
}