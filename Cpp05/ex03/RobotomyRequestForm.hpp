/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 17:58:51 by prossi            #+#    #+#             */
/*   Updated: 2022/08/04 17:30:53 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Form.hpp"
#include <iostream>
#include <string>

class RobotomyRequestForm : public Form 
{
    public:

        RobotomyRequestForm();
        RobotomyRequestForm(std::string Target);
        RobotomyRequestForm(RobotomyRequestForm const & src);
        ~RobotomyRequestForm();

        RobotomyRequestForm & operator=(RobotomyRequestForm const & obj);
        void action() const;
        Form * clone(std::string Target);
    
    private:

        std::string Target;
};
