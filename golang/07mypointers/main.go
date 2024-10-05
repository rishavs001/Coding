package main

import "fmt"

func main() {
	fmt.Println("Welcome to class of pointer")

	var ptr *int
	fmt.Println("Value of pointer is ", ptr) //nil

	myNum :=23
	var ptr2= &myNum
	fmt.Println("Address of pointer is ", ptr2)
	fmt.Println("Value of pointer is ", *ptr2)

	*ptr2= *ptr2 * 2
	fmt.Println("Value of myNum now  is ", myNum)
}
