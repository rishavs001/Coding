package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	welcome := "Welcome to user input"
	fmt.Println(welcome)

	// read documentation for bufio for IO
	reader := bufio.NewReader(os.Stdin)
	fmt.Println("Enter the rating for our pizza:")

	// commaok // err err
	input, _ := reader.ReadString(('\n')) 	// try, catch
	fmt.Println("Thanks for rating, ", input)
	fmt.Printf("Type of this rating is: %T", input) //string

	
}
