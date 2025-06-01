create database teacher;

use teacher
   
CREATE TABLE teachers (
    teacher_id INT AUTO_INCREMENT PRIMARY KEY,
    teacher_name VARCHAR(100) NOT NULL,
    subject VARCHAR(100) NOT NULL,
    email VARCHAR(100) UNIQUE
);

ALTER TABLE students
ADD COLUMN teacher_id INT;

ALTER TABLE students
ADD CONSTRAINT f_teacher
FOREIGN KEY (teacher_id) REFERENCES teachers(teacher_id);

