

CREATE TABLE IF NOT EXISTS animals(
id int NOT NULL,
name text NOT NULL,
primary key(id)
);

CREATE TABLE IF NOT EXISTS clients(
id int NOT NULL,
name text NOT NULL,
address text NOT NULL,
phoneNumber text NOT NULL,
primary key(id)
);

CREATE TABLE IF NOT EXISTS animalPhysical(

id int NOT NULL,
type text not null,
breed text not null,
gender text not null,
age int not null,
size text not null,
Hypoallergenic text not null,
coatType not null,
coatLength not null,
color not null,
primary key(id)
);

CREATE TABLE IF NOT EXISTS animalNonPhysical(
id int not null,
Temperament int not null,
Fear int not null,
DietRestriction int not null,
Loudness int not null,
ActivityLevel int not null,
Loyalty int not null,
Patience int not null,
Playfulness int not null,
Dependence int not null,
Recklessness int not null,
CoopWithAnimals int not null,
CoopWithHumans int not null,
primary key (id)
);

CREATE TABLE IF NOT EXISTS clientPhysical(

id int NOT NULL,
type text ,
breed text,
gender text ,
age int ,
sizee text ,
hypoallergenic text ,
coatType text,
coatLength text,
color text,
primary key(id)
);

CREATE TABLE IF NOT EXISTS clientNonPhysical(
id int not null,
temperament int ,
habits int  ,
fear int,
dietRetriction int  ,
activitylevel int ,
children int ,
otherAnimals int ,
patience int ,
playfulness int ,
loudness int ,
dependence int ,
primary key (id)
);
