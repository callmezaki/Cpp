/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 12:25:21 by zait-sli          #+#    #+#             */
/*   Updated: 2023/01/06 18:41:23 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <list>

template <class T, class Container = std::deque<T> > 
class MutantStack : public std::stack<T>
{
    public:
        typedef typename Container::iterator iterator;
        typedef typename Container::reverse_iterator reverse_iterator;
        iterator begin(void){
            return this->c.begin();
        }
        iterator end(void){
            return this->c.end();
        }
        reverse_iterator rbegin(void){
            return this->c.rbegin();
        }
        reverse_iterator rend(void){
            return this->c.rend();
        }
};

#endif