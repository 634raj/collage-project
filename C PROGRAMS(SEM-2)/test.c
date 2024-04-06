#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PRODUCTS 100

// Define a structure to represent a product
struct Product {
    char name[50];
    float price;
    int quantity;
};

// Global array to store products
struct Product products[MAX_PRODUCTS];
int numProducts = 0;

// Function to add a product to the list
void addProduct(const char *name, float price, int quantity) {
    if (numProducts < MAX_PRODUCTS) {
        strcpy(products[numProducts].name, name);
        products[numProducts].price = price;
        products[numProducts].quantity = quantity;
        numProducts++;
        printf("Product '%s' added successfully.\n", name);
    } else {
        printf("Maximum number of products reached.\n");
    }
}

// Function to display available products
void displayProducts() {
    printf("Available Products:\n");
    printf("Name\t\tPrice\tQuantity\n");
    for (int i = 0; i < numProducts; i++) {
        printf("%s\t\t%.2f\t%d\n", products[i].name, products[i].price, products[i].quantity);
    }
}

// Function to calculate and print the bill
void generateBill() {
    float totalAmount = 0;
    printf("\nBilling Details:\n");
    printf("Name\t\tPrice\tQuantity\tTotal\n");
    for (int i = 0; i < numProducts; i++) {
        float subtotal = products[i].price * products[i].quantity;
        printf("%s\t\t%.2f\t%d\t\t%.2f\n", products[i].name, products[i].price, products[i].quantity, subtotal);
        totalAmount += subtotal;
    }
    printf("\nTotal Amount: %.2f\n", totalAmount);
}

int main() {
    int choice;
    char productName[50];
    float productPrice;
    int productQuantity;

    while (1) {
        printf("\n1. Add Product\n");
        printf("2. Display Available Products\n");
        printf("3. Generate Bill\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter product name: ");
                scanf("%s", productName);
                printf("Enter price: ");
                scanf("%f", &productPrice);
                printf("Enter quantity: ");
                scanf("%d", &productQuantity);
                addProduct(productName, productPrice, productQuantity);
                break;
            case 2:
                displayProducts();
                break;
            case 3:
                generateBill();
                break;
            case 4:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice.\n");
        }
    }

    return 0;
}
