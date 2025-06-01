DELIMITER //

CREATE PROCEDURE GetEmployeesByDepartment(IN dept_id INT)
BEGIN
    SELECT * FROM employees
    WHERE department_id = dept_id;
END //

DELIMITER ;


DELIMITER //

CREATE PROCEDURE GetCourseDetails(IN course_id_input INT)
BEGIN
    SELECT * FROM courses
    WHERE course_id = course_id_input;
END //

DELIMITER ;
