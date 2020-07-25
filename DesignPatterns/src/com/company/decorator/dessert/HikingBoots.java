package com.company.decorator.dessert;

public class HikingBoots extends IceCreamDecorator {
    public HikingBoots(IceCream iceCream) {
        super(iceCream);
    }

    public String printClothing() {
        return super.printClothing() + "gloves, hiking boots ";
    }

    @Override
    public String printName() {
        return "Hiking " + super.printName();
    }

    @Override
    public String toString() {
        return printName() + " wearing: " + printClothing();
    }

}