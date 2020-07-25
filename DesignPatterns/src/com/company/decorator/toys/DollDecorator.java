package com.company.decorator.toys;

// Important, the DollDecorator implements the Doll interface directly. so anyone that used the code doesn't know
// also important because this becomes easier to do with an interface vs concrete classes.
public abstract class DollDecorator implements Doll {
    private Doll doll; // base doll

    public DollDecorator(Doll doll) {
        this.doll = doll;
    }

    @Override
    public String printClothing() {
        return doll.printClothing();
    }

    @Override
    public String printName() {
        return doll.printName();
    }

    @Override
    public String toString() {
        return doll.printName() + " wearing: " + doll.printClothing();
    }
}