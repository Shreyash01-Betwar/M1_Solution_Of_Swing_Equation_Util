# Description

**A utility designed to give the _solution for the disturbance in the synchronous machine by solving swing equation_ using the modified Euler's method and giving the proper values of delta and omega for which the machine will become stable.**

# Requirements 
## High level Requiremts

> To check if the synchronous machine is in ***Trainsient state***.

> To compute the values of **Omega and Delta** of the machine so that machine uses it to come to steady state.
## Low level Requirements

> All the inital considrations are taken into input and these are used to calculate the iterations for the solution of swing using the Eulers method.

> Using the values of the inertia constant, frequency, input electrical power, maximum power and time calculate the value of D1, D2, dp, wp, D1p, D2p, Delta1, Omega1 for the first iteration.

> Again Using the values of D1, D2, dp, wp, D1p, D2p, Delta1, Omega1 of the first iteration to calculate the values of second iteration iterate till we get best values.

> From the last iteration fetch the values of Omega and Delta to analyze synchronous machine.
# SWOT Analysis

## Strength

> The status of the synchronus machine can be known by automating the input capturing system so that it will calculate the status continuously.

> Solution to make the machine come back to stability.

## Weakness

> There are many parameters to be handled so it becomes complicated.

## Opputunities

> This can be used to get the values of the parametes for which the machine will become stable.

> The data for which the machine became unstable can be used to avoid further disturbances.

## Threats 

> Electrical machines can be dangerous to be working with

# 5W's & 1H

## Who

> The people who own a synchronous machine and wants to make it work in stable region

## What

> This is utility which will calculate all the parameters and give the values of omega and delta which can be used to make machine come to stability

## When

> when calculating the values for the stability of the machine

## Where

> this can be used where electrical machines are found

## How

> This is used to calculate the values of omega and delta for which the machine becomes stable



## Note
* Every high level requirements should be a issue in the github with label as a feature and also link it with the low level requirments in the descriptions
* All this should be in image form and understand how the images is linked into the markdown syntax.
