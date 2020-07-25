package com.company.decorator.toys;

public class BarbieDoll implements Doll {
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
