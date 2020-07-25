package com.company.decorator.toys;

public class HikingBoots extends DollDecorator {
    public HikingBoots(Doll doll) {
        super(doll);
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