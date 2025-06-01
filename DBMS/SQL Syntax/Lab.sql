DROP DATABASE IF EXISTS school_db;
CREATE DATABASE school_db;

USE school_db;


create table students (student_id integer, student_name text, age integer,class text,address text);

insert into students (student_id , student_name, age, class, address) values (
101 , 'Krishna' , 19 , 'A' , 'Silver Heights'),
(102 , 'Yash' , 19 , 'B' , 'Sopan'),
(103, 'Vani' , 20 , 'C' , 'Ratna Villa'),
(104, 'Trisha' , 20, 'D' , 'Trisha Bunglow'),
(105 , 'Vansh' , '18' , 'A', 'Shilpan');

select * from students;


select student_name , age from students;

select student_name , age from students where age > 10;





