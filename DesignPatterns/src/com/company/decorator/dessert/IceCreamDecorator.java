package com.company.decorator.dessert;

// Important, the DollDecorator implements the Doll interface directly. so anyone that used the code doesn't know
// also important because this becomes easier to do with an interface vs concrete classes.
public abstract class IceCreamDecorator implements IceCream {
    private IceCream iceCream; // base doll

    public IceCreamDecorator(IceCream iceCream) {
        this.iceCream = iceCream;
    }

    @Override
    public String printClothing() {
        return iceCream.printClothing();
    }

    @Override
    public String printName() {
        return iceCream.printName();
    }

    @Override
    public String toString() {
        return iceCream.printName() + " wearing: " + iceCream.printClothing();
    }
}