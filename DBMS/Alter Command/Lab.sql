create database university_db;

use university_db;

CREATE TABLE courses (
    course_id INT AUTO_INCREMENT PRIMARY KEY,
    course_name VARCHAR(100),
    course_credits INT
);

select * from courses;

ALTER TABLE courses
ADD course_duration INT;

ALTER TABLE courses
DROP COLUMN course_credits;

