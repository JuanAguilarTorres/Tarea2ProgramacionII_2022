#include <gtest/gtest.h>
#include "../src/planilla.h"

namespace
{
    TEST(planilla_Test, Test_Obtener_Empleado)
    {
        /// AAA

        // Arrange - configurar el escenario
        string stringPersonas = "1 Juan Aguilar juan_aguilar@biz.com 1 1";
        istringstream streamPersonas (stringPersonas);

        string stringNomina = "";
        istringstream streamNomina (stringNomina);

        string stringHoras = "1 250 2";
        istringstream streamHoras (stringHoras);

        planilla *laPlanilla = new planilla(&streamPersonas, &streamNomina, &streamHoras);


        // Act - ejecute la operación
        empleadoPorHoras *empleadoEsperado = new empleadoPorHoras(1, "Juan", "Aguilar", 1, 500);
        empleado *empleadoActual = laPlanilla->obtenerEmpleado(1);

        delete laPlanilla;
        // Assert - valide los resultados
        EXPECT_EQ(empleadoEsperado, empleadoActual);
    }

    TEST(planilla_Test, Test_Agregar_Empleado)
    {
        /// AAA

        // Arrange - configurar el escenario
        string stringPersonas = "";
        istringstream streamPersonas (stringPersonas);

        string stringNomina = "";
        istringstream streamNomina (stringNomina);

        string stringHoras = "";
        istringstream streamHoras (stringHoras);

        planilla *laPlanilla = new planilla(&streamPersonas, &streamNomina, &streamHoras);
        empleadoPorHoras *empleadoEsperado = new empleadoPorHoras(1, "Juan", "Aguilar", 1, 500);


        // Act - ejecute la operación
        laPlanilla->agregarEmpleado(empleadoEsperado);
        empleado *empleadoActual = laPlanilla->obtenerEmpleado(1);

        delete laPlanilla;
        // Assert - valide los resultados
        EXPECT_EQ(empleadoEsperado, empleadoActual);
    }


    TEST(planilla_Test, Test_Obtener_Subtotal)
    {
        /// AAA

        // Arrange - configurar el escenario
        string stringPersonas = "1 Denis Tyler denis_tyler@biz.com 1 1 \n 2 Clarissa Parker clarissa_parker@biz.com 1 1";
        istringstream streamPersonas (stringPersonas);

        string stringNomina = "1 4500";
        istringstream streamNomina (stringNomina);

        string stringHoras = "2 40 50";
        istringstream streamHoras (stringHoras);

        planilla *laPlanilla = new planilla(&streamPersonas, &streamNomina, &streamHoras);

        // Act - ejecute la operación
        float actual = laPlanilla->obtenerSubtotal();
        float esperado = (4500)*(0.93) + (40)*(50);

        delete laPlanilla;
        // Assert - valide los resultados
        EXPECT_FLOAT_EQ(esperado, actual);
    }

    TEST(planilla_Test, Test_Obtener_Impuestos)
    {
        /// AAA

        // Arrange - configurar el escenario
        string stringPersonas = "1 Denis Tyler denis_tyler@biz.com 1 1 \n 2 Clarissa Parker clarissa_parker@biz.com 1 1";
        istringstream streamPersonas (stringPersonas);

        string stringNomina = "1 4500";
        istringstream streamNomina (stringNomina);

        string stringHoras = "2 40 50";
        istringstream streamHoras (stringHoras);

        planilla *laPlanilla = new planilla(&streamPersonas, &streamNomina, &streamHoras);

        // Act - ejecute la operación
        float actual = laPlanilla->obtenerImpuestos();
        float esperado = (4500)*(0.07);

        delete laPlanilla;
        // Assert - valide los resultados
        EXPECT_FLOAT_EQ(esperado, actual);
    }

    TEST(planilla_Test, Test_Obtener_Total)
    {
        /// AAA

        // Arrange - configurar el escenario
        string stringPersonas = "1 Denis Tyler denis_tyler@biz.com 1 1 \n 2 Clarissa Parker clarissa_parker@biz.com 1 1";
        istringstream streamPersonas (stringPersonas);

        string stringNomina = "1 4500";
        istringstream streamNomina (stringNomina);

        string stringHoras = "2 40 50";
        istringstream streamHoras (stringHoras);

        planilla *laPlanilla = new planilla(&streamPersonas, &streamNomina, &streamHoras);

        // Act - ejecute la operación
        float actual = laPlanilla->obtenerTotal();
        float esperado = (4500) + (40)*(50);

        delete laPlanilla;
        // Assert - valide los resultados
        EXPECT_FLOAT_EQ(esperado, actual);
    }

    TEST(planilla_Test, Test_Operador_de_Salida)
    {
        /// AAA

        // Arrange - configurar el escenario
        string stringPersonas = "1 Denis Tyler denis_tyler@biz.com 1 1 \n 2 Clarissa Parker clarissa_parker@biz.com 1 1";
        istringstream streamPersonas (stringPersonas);

        string stringNomina = "1 4500";
        istringstream streamNomina (stringNomina);

        string stringHoras = "2 40 50";
        istringstream streamHoras (stringHoras);

        planilla *laPlanilla = new planilla(&streamPersonas, &streamNomina, &streamHoras);

        // Act - ejecute la operación
        string actual = "a";
        string esperado = "b";

        delete laPlanilla;
        // Assert - valide los resultados
        EXPECT_EQ(esperado, actual);
    }


}