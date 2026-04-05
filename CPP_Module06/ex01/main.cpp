/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/05 15:53:08 by daniel-cast       #+#    #+#             */
/*   Updated: 2026/04/05 16:10:10 by daniel-cast      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Serializer.hpp"

int main()
{

	Serializer::Data data;
	data.id = 42;
	data.name = "Daniel";

	std::cout << "== Serializer Test ==" << std::endl;
	std::cout << YELLOW << "Color yellow to pointers" << RESET << std::endl;
	std::cout << BLUE << "Color blue to raw" << RESET << std::endl;

	std::cout << "Original Data: " << data.id << ", " << data.name << "Pointer --> " <<  YELLOW << &data << RESET << std::endl;

	uintptr_t raw = Serializer::serialize(&data);
	std::cout << "Serialized Data (uintptr_t): " << BLUE << raw << RESET << std::endl;

	Serializer::Data* deserializedData = Serializer::deserialize(raw);
	std::cout << "Deserialized Data: " << deserializedData->id << ", " << deserializedData->name  << "Pointer --> " << YELLOW << deserializedData << RESET << std::endl;
	std::cout << "== End of Test ==" << std::endl;
	return (0);
}
