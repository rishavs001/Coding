package main

import (
	"fmt"
)

func main() {
	fmt.Println("Welcome to maps in GoLang")

	languages :=make(map[string]string)
	languages["JS"]="Javascript"
	languages["RB"]="Ruby"
	languages["PY"]="Python"
	languages["GL"]="GoLang"

	fmt.Println("List of all languages: ", languages)
	fmt.Println("JS stands for: ", languages["JS"])

	delete(languages,"RB")
	fmt.Println("New list of all languages: ", languages)

	//loops in golang
	for key,value:= range languages{
		fmt.Printf("For key %v, key is %v\n",key, value)
	}

	for _,value:= range languages{
		fmt.Printf("For key v, key is %v\n", value)
	}
}
