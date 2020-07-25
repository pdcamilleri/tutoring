package com.company.decorator.toys;

public class BeachGear extends DollDecorator {
    public BeachGear(Doll doll) {
        super(doll);
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