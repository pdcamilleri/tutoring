package com.company.decorator.dessert;

public class BeachGear extends IceCreamDecorator {
    public BeachGear(IceCream iceCream) {
        super(iceCream);
    }

    public String printClothing() {
        return super.printClothing() + "a sun hat ";
    }

    @Override
    public String printName() {
        return "Beach " + super.printName();
    }

    @Override
    public String toString() {
        return printName() + " wearing: " + printClothing();
    }
}