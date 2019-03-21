# software engineering


## general userfull information
course website -> http://softeng.polito.it/courses/04GSP

lecture/example/exercises and project

2 part -> written exercise and teory questions
grade: 60% exam + 40% project

we will use gitlab

## software engineering

#### software cycle

1) requirement engineerining
2) requirement document
3) requirement inspection
4) architecture and design
5) design document
6) design inspection
7) implementation
8) software system
9) test,code inspection

10) maintence

> 1-9 measured in month
> 10  mesuared in years

#### requirement engineering

defining the project property before starting.
you need to tell the client what he want, define a way of how
to ask to client the requirements.

we will see a set of tools and instrument to make more clear
the requirement phase and requirement retrivement.

1) elicitation
2) information description
3) analysis and formalization
4) requirement document
5) inspection and reading

requirement: a set of constraints on level of abstraction,level of formality,
functional

defects depending on client:
1) omission/incompleteness (diocane i clienti di merda)
2) incorrect fact
3) inconsistency/contradiction
4) ambiguity
5) extraneous information (overspecification)
6) redundancy

#### requirement document structure
1) overall description
2) stakeholders
3) context diagram and interfaces
4) requirements
> functional
> non functional
> domain
5) use case diagram
6) scenarios
7) glossary
8) system design

stakeholder
> role or person with an interest (stake) in the system to be built
user
> uses the system
> can include different user profiles

how to design contex diagram? Astauml or code

#### CONTEXT DIAGRAM EXAMPLE
´´´plantuml
left to right direction
skinparam packageStyle rectangle
actor Cashier
actor Product
actor "credit card system" as ccs
actor "inventory and catalogue system" as ics
rectancle system {
    Cashier -- (Pos System)
    Product -- (Pos System)
    (Pos System) -- ccs
    (Pos System) -- ics
}
´´´


