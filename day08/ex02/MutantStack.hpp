/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 12:25:21 by zait-sli          #+#    #+#             */
/*   Updated: 2023/01/06 13:45:53 by zait-sli         ###   ########.fr       */
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
class MutantStack
{
    private:
        Container c;
    public:
        typedef typename Container::iterator iterator;
        T& top(void){
            return *c.begin();
        }
        iterator begin(void){
            return c.begin();
        }
        iterator end(void){
            return c.end();
        }
        void push(T p){
            c.push_back(p);
        }
        void pop(){
            c.pop_back();
        }
        unsigned int  size(){
            unsigned int len = 0;

            for (iterator i = c.begin(); i != end(); i++)
                len++;
            return len;
        }
};

#endif