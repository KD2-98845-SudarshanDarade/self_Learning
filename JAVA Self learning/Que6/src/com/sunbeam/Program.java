package com.sunbeam;

import java.util.Scanner;

class ECommerceException extends Exception {
    ECommerceException(String message) {
        super(message);
    }
}

class PaymentException extends ECommerceException {
    PaymentException(String message) {
        super(message);
    }
}

class InventoryException extends ECommerceException {
    InventoryException(String message) {
        super(message);
    }
}

class ShippingException extends ECommerceException {
    ShippingException(String message) {
        super(message);
    }
}

public class Program {

    static void payment(double amount) throws PaymentException {
        if (amount <= 0) {
            throw new PaymentException("Invalid payment amount");
        }
        System.out.println("Payment successful");
    }

    static void checkStock(int stock) throws InventoryException {
        if (stock <= 0) {
            throw new InventoryException("Product out of stock");
        }
        System.out.println("Product available");
    }

    static void shipping(String address) throws ShippingException {
        if (address == null || address.isEmpty()) {
            throw new ShippingException("Invalid shipping address");
        }
        System.out.println("Shipping confirmed");
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        try {
            System.out.print("Enter payment amount: ");
            double amount = sc.nextDouble();

            System.out.print("Enter available stock: ");
            int stock = sc.nextInt();
            sc.nextLine();

            System.out.print("Enter shipping address: ");
            String address = sc.nextLine();

            payment(amount);
            checkStock(stock);
            shipping(address);

        } catch (PaymentException e) {
            System.out.println(e.getMessage());
        } catch (InventoryException e) {
            System.out.println(e.getMessage());
        } catch (ShippingException e) {
            System.out.println(e.getMessage());
        }

        sc.close();
    }
}