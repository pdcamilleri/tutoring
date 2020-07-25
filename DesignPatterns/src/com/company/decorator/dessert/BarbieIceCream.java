package com.company.decorator.dessert;

public class BarbieIceCream implements IceCream {
    @Override
    public String printClothing() {
        return "dress ";
    }

    @Override
    public String printName() {
        return "Barbie doll";
    }

    @Override
    public String toString() {
        return printName() + " wearing: " + printClothing();
    }
}
