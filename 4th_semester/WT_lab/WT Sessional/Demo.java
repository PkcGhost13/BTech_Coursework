class Employee {
    String name;
    int Emp_ID;
    double Basic_Salary,Gross_Salary;

    Employee(String name, int emp_ID, double basic_Salary) {
        this.name = name;
        Emp_ID = emp_ID;
        Basic_Salary = basic_Salary;
    }

    void find_GrossSalary() {
        Gross_Salary = Basic_Salary;
    }
}

class TechEmp extends Employee {
    int year_of_Experience;

    TechEmp(String name, int emp_ID, double basic_Salary, int year_of_Experience) {
        super(name, emp_ID, basic_Salary);
        this.year_of_Experience = year_of_Experience;
    }

    void find_GrossSalary() {
        Gross_Salary = Basic_Salary + (Basic_Salary * 1.2) + (Basic_Salary * 0.15);
        System.out.println("TechEmp\nName : " + name + "\nEmployee ID : " + Emp_ID + "\nYears of Experience : "
                + year_of_Experience + "\nGross Salary of NoTechEmp is: " + Gross_Salary);
    }
}

class NotechEmp extends Employee {

    int years_of_experience;

    NotechEmp(String name, int emp_ID, double basic_Salary, int years_of_Experience) {
        super(name, emp_ID, basic_Salary);
        this.years_of_experience = years_of_Experience;
    }

    void find_GrossSalary() {
        Gross_Salary = Basic_Salary * years_of_experience;
        System.out.println("NonTechEmp\nName : " + name + "\nEmployee ID : " + Emp_ID + "\nYears of Experience : "
                + years_of_experience + "\nGross Salary of NoTechEmp is: " + Gross_Salary);
    }
}

class Demo {
    public static void main(String[] args) {
        Employee techEmp = new TechEmp("Pawan", 1478, 15000, 13);
        techEmp.find_GrossSalary();
        Employee noTechEmp = new NotechEmp("Pawan", 1478, 15000, 13);
        noTechEmp.find_GrossSalary();
    }
}