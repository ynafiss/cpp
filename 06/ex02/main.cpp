/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:13:11 by ynafiss           #+#    #+#             */
/*   Updated: 2023/11/15 14:43:01 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.hpp"

int main(){
    Base *p = generate();
    Base *a = generate();
    Base *c = generate();
    Base *g = generate();
    Base *v = generate();
    Base *r = generate();
    Base *k = generate();

    identify(p);
    identify(NULL);
    identify(a);
    identify(c);
    identify(v);
    identify(r);
    identify(k);
    identify(g);
    
}