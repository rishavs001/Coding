package main

import "fmt"

//jwtToken:=3000    // oprator not allowed outside method
var jwtToken int = 3000 	//allowed
const LoginToken string = "rishavlogin"  //Public
// Variable with first letter in capital letter means it is a public variable
// It is similar to: Public var jwtToken int = 3000 in other language

func main(){
	var username string = "rishav"
	fmt.Println(username)
	fmt.Printf("Variable type is: %T \n", username)

	var isLogged bool = false
	fmt.Println(isLogged)
	fmt.Printf("Variable type is: %T \n", isLogged)

	var samllVal uint8 = 255    // refer documentation for more types
	fmt.Println(samllVal)
	fmt.Printf("Variable type is: %T \n", samllVal)

	var samllFloat float64 = 255.5454554665
	fmt.Println(samllFloat)
	fmt.Printf("Variable type is: %T \n", samllFloat)

	// default values and some aliases
	var anotherVariable int
	fmt.Println (anotherVariable)
	fmt.Printf ( "Variable is of type: %T \n", anotherVariable)

	var anotherVariable2 float32
	fmt.Println (anotherVariable2)
	fmt.Printf ( "Variable is of type: %T \n", anotherVariable2)

	// implicit type
	var website = "Iearncodeontine.in"
	fmt.Println(website)

	// no var style
	numberOfUser :=300000.0
	// := is the short variable declaration operator in Go. 
	// It is used to declare and initialize a variable without explicitly specifying its type. 
	// The type is inferred from the value on the right-hand side of the assignment.
	// this operator can only be used inside a method
	fmt.Println(numberOfUser)

	fmt.Println(LoginToken)
	fmt.Printf("Variable is of type: %T \n", LoginToken) 
}