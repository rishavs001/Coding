package main

import "fmt"

func main() {
	fmt.Println("Methods in golang")
	// no inheritance in golang, no super no parent

	rishav := User{"Rishav", "risu55.2014@gmail.com", true, 27}
	// fmt.Println(rishav)
	// fmt.Printf("Rishav details are: %+v\n", rishav)
	// fmt.Printf("Name is %v and Email is %v\n", rishav.Name,rishav.Email)

	rishav.GetStatus()
	rishav.NewMail()

	// fmt.Printf("Name is %v and Email is %v\n", rishav.Name,rishav.Email)
}

type User struct {
	Name   string
	Email  string
	Status bool
	Age    int
}

func (u User) GetStatus() {
	fmt.Println("Is user active: ", u.Status)
}

func (u User) NewMail() { //copy.... doesnot change original obeject
	u.Email = "test@go.dev"
	fmt.Println("New Email of this user is: ", u.Email)
}
