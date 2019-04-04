#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
/** \brief Pide un número y lo retorna en la variable A.
 * \return Retorna un número de tipo float.
 */
float IngresarA ();

/** \brief Pide un número y lo retorna en la variable B.
 * \return Retorna un número de tipo float.
 */
float IngresarB ();

/** \brief Pide dos números, los suma.
 * \param Pide un número que se deposita en A.
 * \param Pide un número que se deposita en B.
 */
void Sumar (float,float);

/** \brief Pide dos números, los resta.
 * \param Pide un número que se deposita en A.
 * \param Pide un número que se deposita en B.
 */
void Restar (float, float);

/** \brief Pide dos números y los divide.
 * \param Pide un número que se deposita en A.
 * \param Pide un número que se deposita en B.
 */
void Dividir (float, float);

/** \brief Pide dos números y los multiplica.
 * \param Pide un número que se deposita en A.
 * \param Pide un número que se deposita en B.
 */
void Multiplicar (float, float);

/** \brief Pide el número A y realiza el factorial.
 * \param pide un número y se deposita en A.
 */
void Factorial (float);

/** \brief Pide dos números y realiza todas las operaciones
 * \param Pide un número que se deposita en A.
 * \param Pide un número que se deposita en B.
 */
void realizarTodo (float, float);

#endif // FUNCIONES_H_INCLUDED
