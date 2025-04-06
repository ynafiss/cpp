/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:05:27 by ynafiss           #+#    #+#             */
/*   Updated: 2023/11/15 17:26:03 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"


int main() {
    // Create an instance of the Data class
    Data* originalData = new Data(55);

    // Serialize the Data object
    uintptr_t serializedData = Serializer::serialize(originalData);

    // Deserialize the serialized data back to a Data object
    Data* restoredData = Serializer::deserialize(serializedData);
    std::cout << restoredData->value;

    // Use the restoredData or perform further actions

    // Don't forget to clean up the dynamically allocated memory
    // delete originalData;
    delete restoredData;

    return 0;
}