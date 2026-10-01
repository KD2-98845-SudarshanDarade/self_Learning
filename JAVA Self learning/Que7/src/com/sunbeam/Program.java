package com.sunbeam;

import java.util.*;

class Product {
    int id;
    String name;
    double price;

    Product(int id, String name, double price) {
        this.id = id;
        this.name = name;
        this.price = price;
    }

    public String toString() {
        return id + " " + name + " " + price;
    }
}

public class Program {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        HashMap<Integer, Product> cart = new HashMap<>();
        ArrayList<String> orderHistory = new ArrayList<>();

        int choice;

        do {
            System.out.println("\n1. Add product");
            System.out.println("2. Display cart");
            System.out.println("3. Remove product");
            System.out.println("4. Place order");
            System.out.println("5. View order history");
            System.out.println("0. Exit");

            System.out.print("Enter choice: ");
            choice = sc.nextInt();

            switch (choice) {
                case 1:
                    System.out.print("Enter product ID: ");
                    int id = sc.nextInt();

                    System.out.print("Enter product name: ");
                    String name = sc.next();

                    System.out.print("Enter price: ");
                    double price = sc.nextDouble();

                    cart.put(id, new Product(id, name, price));
                    System.out.println("Product added");
                    break;

                case 2:
                    for (Product p : cart.values()) {
                        System.out.println(p);
                    }
                    break;

                case 3:
                    System.out.print("Enter product ID: ");
                    id = sc.nextInt();

                    if (cart.remove(id) != null) {
                        System.out.println("Product removed");
                    } else {
                        System.out.println("Product not found");
                    }
                    break;

                case 4:
                    if (cart.isEmpty()) {
                        System.out.println("Cart is empty");
                    } else {
                        double total = 0;

                        for (Product p : cart.values()) {
                            total += p.price;
                        }

                        String order = "Total amount: " + total;
                        orderHistory.add(order);
                        cart.clear();

                        System.out.println("Order placed");
                        System.out.println(order);
                    }
                    break;

                case 5:
                    for (String order : orderHistory) {
                        System.out.println(order);
                    }
                    break;

                case 0:
                    System.out.println("Exiting...");
                    break;

                default:
                    System.out.println("Invalid choice");
            }

        } while (choice != 0);

        sc.close();
    }
}