/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 09:19:58 by ynafiss           #+#    #+#             */
/*   Updated: 2023/11/29 11:03:41 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <vector>

int main()
{
MutantStack<int, std::vector<int> > mstack;
mstack.push(5);
mstack.push(17);

// std::cout << mstack.top() << std::endl;
mstack.pop();
// std::cout << mstack.size() << std::endl;
mstack.push(3);
mstack.push(5);                                                              
mstack.push(737);
//[...]
mstack.push(0);
MutantStack<int, std::vector<int> >::iterator it = mstack.begin();
MutantStack<int, std::vector<int> >::iterator ite = mstack.end();
++it;
--it;
while (it != ite)
{
std::cout << *it << std::endl;
++it;
}
std::cout << "================\n";
// std::stack<int> s(mstack);
MutantStack<int, std::vector<int> > rs =mstack;
MutantStack<int, std::vector<int> >::iterator rit = rs.begin();
MutantStack<int, std::vector<int> >::iterator rite = rs.end();
++rit;
--rit;
while (rit != rite)
{
std::cout << *rit << std::endl;
++rit;
}
}

// int main()
// {
// std::list<int> mstack;
// mstack.push_back(5);
// mstack.push_back(17);
// std::cout << mstack.back() << std::endl;
// mstack.pop_back();
// std::cout << mstack.size() << std::endl;
// mstack.push_back(3);
// mstack.push_back(5);
// mstack.push_back(737);
// //[...]
// mstack.push_back(0);
// std::list<int>::iterator it = mstack.begin();
// std::list<int>::iterator ite = mstack.end();
// ++it;
// --it;
// while (it != ite)
// {
// std::cout << *it << std::endl;
// ++it;
// }
// // std::stack<int> s(mstack);
// }