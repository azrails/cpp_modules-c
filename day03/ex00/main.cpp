#include "FragTrap.hpp"

int main(void)
{
    std::cout <<std::endl << "---------------------woke up---------------------" << std::endl;
    FragTrap john;
    FragTrap ausos("Ausos");
    FragTrap asaca(ausos);
    FragTrap sanya("sanya");
    FragTrap emrp_tp("EMRP-TP");
    sanya = john;

    std::cout<<std::endl << "---------------------repairing---------------------" << std::endl;
    emrp_tp.rangedAttack(ausos.getName());
    ausos.takeDamage(emrp_tp.getRdmg());

    ausos.meleeAttack(emrp_tp.getName());
    emrp_tp.takeDamage(3);
    emrp_tp.takeDamage(2);
    emrp_tp.takeDamage(5);
    emrp_tp.takeDamage(30);
    std::cout <<std::endl << "---------------------repairing---------------------" << std::endl;
    std::cout << emrp_tp.getName() << " use heal" << std::endl;
    emrp_tp.beRepaired(10);
    emrp_tp.beRepaired(100);
    std::cout <<std::endl << "---------------------random shots---------------------" << std::endl;
    ausos.vaulthunter_dot_exe(john.getName());
    john.takeDamage(1000);
    sanya.setName("Sanya");
    sanya.vaulthunter_dot_exe(asaca.getName());
    asaca.beRepaired(80);
    ausos.vaulthunter_dot_exe(john.getName());
    john.takeDamage(1000);
    john.beRepaired(1000);
    ausos.vaulthunter_dot_exe(john.getName());
    john.takeDamage(1000);
    john.beRepaired(1000);
    ausos.vaulthunter_dot_exe(john.getName());
    john.takeDamage(1000);
    john.beRepaired(1000);
    ausos.vaulthunter_dot_exe(john.getName());
    std::cout <<std::endl << "---------------------apocalypsis---------------------" << std::endl;
    return 0;
}