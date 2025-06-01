-- 1 

DECLARE
  CURSOR emp_cur IS SELECT emp_id, emp_name, salary FROM employees;
  v_id employees.emp_id%TYPE;
  v_name employees.emp_name%TYPE;
  v_salary employees.salary%TYPE;
BEGIN
  OPEN emp_cur;
  LOOP
    FETCH emp_cur INTO v_id, v_name, v_salary;
    EXIT WHEN emp_cur%NOTFOUND;
    DBMS_OUTPUT.PUT_LINE(v_id || ', ' || v_name || ', ' || v_salary);
  END LOOP;
  CLOSE emp_cur;
END;


-- 2

DECLARE
  CURSOR course_cur IS SELECT course_id, course_name FROM courses;
  v_id courses.course_id%TYPE;
  v_name courses.course_name%TYPE;
BEGIN
  OPEN course_cur;
  LOOP
    FETCH course_cur INTO v_id, v_name;
    EXIT WHEN course_cur%NOTFOUND;
    DBMS_OUTPUT.PUT_LINE(v_id || ': ' || v_name);
  END LOOP;
  CLOSE course_cur;
END;
