drop database tourism;

create database tourism;

use tourism;

CREATE TABLE `countries` (
	`id` int(4) NOT NULL AUTO_INCREMENT,
	`name` varchar(30) NOT NULL,
	PRIMARY KEY (`id`)
);

CREATE TABLE `cities` (
	`id` int(4) NOT NULL AUTO_INCREMENT,
	`name` varchar(30) NOT NULL,
	`id_country` int(4) NOT NULL,
	PRIMARY KEY (`id`)
);

CREATE TABLE `tourists` (
	`id` int(4) NOT NULL AUTO_INCREMENT,
	`first_name` varchar(20) NOT NULL,
	`last_name` varchar(20) NOT NULL,
	`gender` int(2) NOT NULL,
	`telephone` varchar(12) NOT NULL,
	`id_city` int(4) NOT NULL,
	`birthsday` DATE NOT NULL,
	`id_sale` int(4) NOT NULL,
	PRIMARY KEY (`id`)
);

CREATE TABLE `genders` (
	`id` int(2) NOT NULL AUTO_INCREMENT,
	`name` varchar(20) NOT NULL,
	PRIMARY KEY (`id`)
);
insert into genders(name)
values ('male'),('female');

CREATE TABLE `sales` (
	`id` int(4) NOT NULL AUTO_INCREMENT,
	`name` varchar(20) NOT NULL,
	`value` int(4) NOT NULL,
	PRIMARY KEY (`id`)
);

CREATE TABLE `tours` (
	`id` int(4) NOT NULL AUTO_INCREMENT,
	`name` varchar(30) NOT NULL,
	`id_country` int(4) NOT NULL,
	`id_transport` int(4) NOT NULL,
	`notes` varchar(40) NOT NULL,
	`id_season` int(4) NOT NULL,
	PRIMARY KEY (`id`)
);

CREATE TABLE `seasons` (
	`id` int(4) NOT NULL AUTO_INCREMENT,
	`name` varchar(20) NOT NULL,
	PRIMARY KEY (`id`)
);

CREATE TABLE `transports` (
	`id` int(4) NOT NULL AUTO_INCREMENT,
	`name` varchar(20) NOT NULL,
	PRIMARY KEY (`id`)
);

insert into transports(name)
values ('airlines'), ('bus'), ('train'), ('ship'),
       ('car');
