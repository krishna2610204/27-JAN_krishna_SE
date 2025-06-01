DROP DATABASE IF EXISTS newdb;
CREATE DATABASE newdb;

USE newdb;


CREATE TABLE Customer (
    customer_id INTEGER,
    cust_name VARCHAR(100),
    city VARCHAR(100),
    grade INTEGER,
    salesman_id INTEGER
);

select * from Customer;

insert into Customer (customer_id , cust_name , city , grade , salesman_id) values (3002 , 'Nick_Rimando' , 'New York' , 100 , 5001);

select * from Customer;

insert into Customer (customer_id , cust_name , city , grade , salesman_id) values (
3007 , 'Brad Davis' , 'New York' , 200 , 5001),
(3005 , 'Graham Zusi' , 'California' , 200 , 5002);

select * from Customer;

insert into Customer (customer_id , cust_name , city , grade , salesman_id) values (
3008, 'Julian Green' , 'London' , 300 , 5002),
(3004 , 'Fabian Johnson' , 'Paris' , 300 , 5002),
(3009 , 'Geoff Cameron' , 'Berlin' , 100 , 5003),
(3003 , 'Jozy Altidor' , 'Moscow' , 200 , 5007),
(3001 , 'Brad Guzan', 'London' , null , 5005);

select * from Customer;








create table salesman ( salesman_id integer , name text , city text , commission decimal (5,3));

insert into salesman (salesman_id , name , city , commission) values (
5001 , 'James Hoog' , 'New York' , 0.15),
(5005 , 'Pit Alex' , 'London' , 0.11),
(5006 , 'Mc Lyon' , 'Paris' , 0.14),
(5007 , 'Pual Adam' , 'Rome' ,0.13),
(5003 , 'Lauson Hen' , 'SanJose' , 0.12);

select * from salesman;

SELECT 
    Customer.cust_name, 
    Customer.city, 
    Customer.salesman_id, 
    Salesman.commission AS commission
FROM 
    Customer
INNER JOIN 
    Salesman ON Customer.salesman_id = Salesman.salesman_id;




