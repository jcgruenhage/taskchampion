////////////////////////////////////////////////////////////////////////////////
//
// Copyright 2006 - 2018, Paul Beckingham, Federico Hernandez.
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included
// in all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
// OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
// THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.
//
// http://www.opensource.org/licenses/mit-license.php
//
////////////////////////////////////////////////////////////////////////////////

#ifndef INCLUDED_STRINGS
#define INCLUDED_STRINGS

// columns/Col*
#define STRING_COLUMN_LABEL_DESC     "Description"
#define STRING_COLUMN_LABEL_DUE      "Échéance"
#define STRING_COLUMN_LABEL_END      "Fin"
#define STRING_COLUMN_LABEL_ENTERED  "Entrée"
#define STRING_COLUMN_LABEL_COUNT    "Temps restant"
#define STRING_COLUMN_LABEL_COMPLETE "Complétée"
#define STRING_COLUMN_LABEL_MOD      "Modifiée"
#define STRING_COLUMN_LABEL_ADDED    "Ajoutée"
#define STRING_COLUMN_LABEL_AGE      "Age"
#define STRING_COLUMN_LABEL_PROJECT  "Projet"
#define STRING_COLUMN_LABEL_UNTIL    "Until"
#define STRING_COLUMN_LABEL_WAIT     "Attente"
#define STRING_COLUMN_LABEL_WAITING  "En attente jusqu’au"
#define STRING_COLUMN_LABEL_RECUR    "Récur"
#define STRING_COLUMN_LABEL_RECUR_L  "Récurrence"
#define STRING_COLUMN_LABEL_START    "Début"
#define STRING_COLUMN_LABEL_STARTED  "Débutée"
#define STRING_COLUMN_LABEL_ACTIVE   "A"
#define STRING_COLUMN_LABEL_STATUS   "Statut"
#define STRING_COLUMN_LABEL_STAT     "St"
#define STRING_COLUMN_LABEL_STAT_PE  "Prévue"
#define STRING_COLUMN_LABEL_STAT_CO  "Complétée"
#define STRING_COLUMN_LABEL_STAT_DE  "Supprimée"
#define STRING_COLUMN_LABEL_STAT_WA  "En attente"
#define STRING_COLUMN_LABEL_STAT_RE  "Récurrente"
#define STRING_COLUMN_LABEL_STAT_P   "P"
#define STRING_COLUMN_LABEL_STAT_C   "C"
#define STRING_COLUMN_LABEL_STAT_D   "S"
#define STRING_COLUMN_LABEL_STAT_W   "A"
#define STRING_COLUMN_LABEL_STAT_R   "R"
#define STRING_COLUMN_LABEL_TAGS     "Étiquettes"
#define STRING_COLUMN_LABEL_TAG      "Étiq"
#define STRING_COLUMN_LABEL_UUID     "UUID"
#define STRING_COLUMN_LABEL_URGENCY  "Urgence"
#define STRING_COLUMN_LABEL_NAME     "Nom"
#define STRING_COLUMN_LABEL_VALUE    "Valeur"
#define STRING_COLUMN_LABEL_LAST     "Last instance"
#define STRING_COLUMN_LABEL_RTYPE    "Recurrence type"
#define STRING_COLUMN_LABEL_DATE     "Date"
#define STRING_COLUMN_LABEL_COLUMN   "Colonnes"
#define STRING_COLUMN_LABEL_STYLES   "Formats supportés"
#define STRING_COLUMN_LABEL_EXAMPLES "Exemple"
#define STRING_COLUMN_LABEL_SCHED    "Planifiée"
#define STRING_COLUMN_LABEL_UDA      "Nom"
#define STRING_COLUMN_LABEL_TYPE     "Type"
#define STRING_COLUMN_LABEL_MODIFY   "Modifiable"
#define STRING_COLUMN_LABEL_NOMODIFY "Read Only"
#define STRING_COLUMN_LABEL_LABEL    "Étiq"
#define STRING_COLUMN_LABEL_DEFAULT  "Défaut"
#define STRING_COLUMN_LABEL_VALUES   "Valeurs autorisées"
#define STRING_COLUMN_LABEL_UDACOUNT "Compte d’utilisation"
#define STRING_COLUMN_LABEL_ORPHAN   "ADU orphelins"

#define STRING_COLUMN_LABEL_COMMAND  "Command"
#define STRING_COLUMN_LABEL_CATEGORY "Category"
#define STRING_COLUMN_LABEL_RO       "R/W"
#define STRING_COLUMN_LABEL_SHOWS_ID "ID"
#define STRING_COLUMN_LABEL_GC       "GC"
#define STRING_COLUMN_LABEL_CONTEXT  "Context"
#define STRING_COLUMN_LABEL_FILTER   "Filter"
#define STRING_COLUMN_LABEL_MODS     "Mods"
#define STRING_COLUMN_LABEL_MISC     "Misc"

// Column Examples
#define STRING_COLUMN_EXAMPLES_TAGS  "maison @routine next"
#define STRING_COLUMN_EXAMPLES_PROJ  "maison.jardin"
#define STRING_COLUMN_EXAMPLES_PAR   "maison"
#define STRING_COLUMN_EXAMPLES_IND   "  maison.jardin"
#define STRING_COLUMN_EXAMPLES_DESC  "Move your clothes down on to the lower peg"
#define STRING_COLUMN_EXAMPLES_ANNO1 "Juste avant votre repas"
#define STRING_COLUMN_EXAMPLES_ANNO2 "If you are playing in the match this afternoon"
#define STRING_COLUMN_EXAMPLES_ANNO3 "Before you write your letter home"
#define STRING_COLUMN_EXAMPLES_ANNO4 "If you're not getting your hair cut"

// commands/Cmd*
// USAGE strings are visible in 'task help'
#define STRING_CMD_VERSION_USAGE     "Affiche le numéro de version de taskwarrior"
#define STRING_CMD_VERSION_USAGE2    "Affiche uniquement le numéro de version de taskwarrior"
#define STRING_CMD_VERSION_DOCS      "On peut trouver les documents de taskwarrior en utilisant 'man task', 'man taskrc', 'man task-color', 'man task-sync', ou chez http://taskwarrior.org"
#define STRING_CMD_VERSION_UNKNOWN   "inconnu"
#define STRING_CMD_EXEC_USAGE        "Lance les commandes et les scripts externes."
#define STRING_CMD_URGENCY_USAGE     "Affiche l'indice d'urgence de la tâche"
#define STRING_CMD_URGENCY_RESULT    "task {1} urgency {2}"
#define STRING_CMD_ADD_USAGE         "Ajoute une nouvelle tâche"
#define STRING_CMD_ADD_FEEDBACK      "Tâche {1} crée."
#define STRING_CMD_ADD_RECUR         "Created task {1} (recurrence template)."
#define STRING_CMD_LOG_USAGE         "Adds a new task that is already completed"
#define STRING_CMD_LOG_NO_RECUR      "Vous ne pouvez pas journaliser une tâche récurrente."
#define STRING_CMD_LOG_NO_WAITING    "Vous ne pouvez pas journaliser une tâche en attente."

//#define STRING_CMD_LOG_LOGGED        "Tâche journalisée."
#define STRING_CMD_LOG_LOGGED        "Logged task {1}."

#define STRING_CMD_IDS_USAGE_RANGE   "Affiche les IDs des tâches correspondantes, comme une plage"
#define STRING_CMD_IDS_USAGE_LIST    "Affiche les IDs des tâches correspondantes, sous forme de liste"
#define STRING_CMD_IDS_USAGE_ZSH     "Affiche les IDs  et les descriptions des tâches correspondantes"
#define STRING_CMD_UDAS_USAGE        "Affiche les détails de tous les ADUs définis"
#define STRING_CMD_UDAS_COMPL_USAGE  "Affiche les ADUs définis, pour la complétion"
#define STRING_CMD_UUIDS_USAGE_RANGE "Affiche le UUIDs des tâches correspondantes, comme une liste séparée par des virgules"
#define STRING_CMD_UUIDS_USAGE_LIST  "Affiche le UUIDs des tâches correspondantes, comme une liste"
#define STRING_CMD_UUIDS_USAGE_ZSH   "Affiche le UUIDs et les descriptions des tâches correspondantes"
#define STRING_CMD_INFO_USAGE        "Affiche toutes les données et méta-données"
#define STRING_CMD_INFO_BLOCKED      "Cette tâche est bloquée par"
#define STRING_CMD_INFO_BLOCKING     "Cette tâche bloque"
#define STRING_CMD_INFO_UNTIL        "Jusqu'au"
#define STRING_CMD_INFO_MODIFICATION "Modification"
#define STRING_CMD_INFO_MODIFIED     "Dernier modifié"
#define STRING_CMD_INFO_VIRTUAL_TAGS "Virtual tags"
#define STRING_CMD_UNDO_USAGE        "Annule les changements les plus récents sur une tâche"
#define STRING_CMD_REPORTS_USAGE     "Liste tous les rapports supportés"
#define STRING_CMD_REPORTS_REPORT    "Rapport"
#define STRING_CMD_REPORTS_DESC      "Description"
#define STRING_CMD_REPORTS_SUMMARY   "{1} rapports"
#define STRING_CMD_TAGS_USAGE        "Affiche une liste de toutes les étiquettes utilisées"
#define STRING_CMD_COMTAGS_USAGE     "Affiche uniquement une liste des étiquettes utilisées, pour la complétion"
#define STRING_CMD_TAGS_SINGLE       "1 étiquette"
#define STRING_CMD_TAGS_PLURAL       "{1} étiquettes"
#define STRING_CMD_TAGS_NO_TAGS      "Pas d'étiquettes."
#define STRING_CMD_HISTORY_USAGE_D   "Shows a report of task history, by day"
#define STRING_CMD_HISTORY_USAGE_W   "Shows a report of task history, by week"
#define STRING_CMD_HISTORY_DAY       "Day"
#define STRING_CMD_GHISTORY_USAGE_D  "Shows a graphical report of task history, by day"
#define STRING_CMD_GHISTORY_USAGE_W  "Shows a graphical report of task history, by week"
#define STRING_CMD_GHISTORY_USAGE_D  "Shows a graphical report of task history, by day"
#define STRING_CMD_GHISTORY_USAGE_W  "Shows a graphical report of task history, by week"
#define STRING_CMD_GHISTORY_DAY      "Day"
#define STRING_CMD_HISTORY_USAGE_M   "Shows a report of task history, by month"
#define STRING_CMD_HISTORY_YEAR      "Année"
#define STRING_CMD_HISTORY_MONTH     "Mois"
#define STRING_CMD_HISTORY_ADDED     "Ajoutées"
#define STRING_CMD_HISTORY_COMP      "Achevées"
#define STRING_CMD_HISTORY_DEL       "Supprimées"
#define STRING_CMD_HISTORY_NET       "Net"
#define STRING_CMD_HISTORY_USAGE_A   "Montre un rapport de l'histoire des tâches, par an"
#define STRING_CMD_HISTORY_AVERAGE   "Moyenne"
#define STRING_CMD_HISTORY_LEGEND    "Légende : {1}, {2}, {3}"
#define STRING_CMD_HISTORY_LEGEND_A  "Legend: + added, X completed, - deleted"
#define STRING_CMD_GHISTORY_USAGE_M  "Shows a graphical report of task history, by month"
#define STRING_CMD_GHISTORY_USAGE_A  "Montre un rapport graphique de l'histoire des tâches, par an"
#define STRING_CMD_GHISTORY_YEAR     "An"
#define STRING_CMD_GHISTORY_MONTH    "Mois"
#define STRING_CMD_GHISTORY_NUMBER   "Number Added/Completed/Deleted"
#define STRING_CMD_UNIQUE_USAGE      "Generates lists of unique attribute values"
#define STRING_CMD_UNIQUE_MISSING    "An attribute must be specified.  See 'task _columns'."
#define STRING_CMD_UNIQUE_VALID      "You must specify an attribute or UDA."

#define STRING_CMD_APPEND_USAGE      "Appends text to an existing task description"
#define STRING_CMD_APPEND_1          "Appended {1} task."
#define STRING_CMD_APPEND_N          "Appended {1} tasks."
#define STRING_CMD_APPEND_TASK       "Appending to task {1} '{2}'."
#define STRING_CMD_APPEND_TASK_R     "Appending to recurring task {1} '{2}'."
#define STRING_CMD_APPEND_CONFIRM_R  "This is a recurring task.  Do you want to append to all pending recurrences of this same task?"
#define STRING_CMD_APPEND_CONFIRM    "Append to task {1} '{2}'?"
#define STRING_CMD_APPEND_NO         "Tâche non suffixée."

#define STRING_CMD_PREPEND_USAGE     "Prepends text to an existing task description"
#define STRING_CMD_PREPEND_1         "Prepended {1} task."
#define STRING_CMD_PREPEND_N         "Prepended {1} tasks."
#define STRING_CMD_PREPEND_TASK      "Prepending to task {1} '{2}'."
#define STRING_CMD_PREPEND_TASK_R    "Prepending to recurring task {1} '{2}'."
#define STRING_CMD_PREPEND_CONFIRM_R "This is a recurring task.  Do you want to prepend to all pending recurrences of this same task?"
#define STRING_CMD_PREPEND_CONFIRM   "Prepend to task {1} '{2}'?"
#define STRING_CMD_PREPEND_NO        "Tâche not prepended."

#define STRING_CMD_IMPORT_USAGE      "Imports JSON files"
#define STRING_CMD_IMPORT_SUMMARY    "Imported {1} tasks."
#define STRING_CMD_IMPORT_FILE       "Importing '{1}'"
#define STRING_CMD_IMPORT_MISSING    "File '{1}' not found."
#define STRING_CMD_IMPORT_UUID_BAD   "Not a valid UUID '{1}'."
#define STRING_TASK_NO_DESC          "Annotation is missing a description: {1}"
#define STRING_TASK_NO_ENTRY         "Annotation is missing an entry date: {1}"

#define STRING_CMD_COMMANDS_USAGE    "Generates a list of all commands, with behavior details"
#define STRING_CMD_HCOMMANDS_USAGE   "Generates a list of all commands, for autocompletion purposes"
#define STRING_CMD_ZSHCOMMANDS_USAGE "Generates a list of all commands, for zsh autocompletion purposes"
#define STRING_CMD_ZSHATTS_USAGE     "Generates a list of all attributes, for zsh autocompletion purposes"
#define STRING_CMD_ALIASES_USAGE     "Generates a list of all aliases, for autocompletion purposes"

#define STRING_CMD_COLOR_USAGE       "All colors, a sample, or a legend"
#define STRING_CMD_COLOR_HERE        "Here are the colors currently in use:"
#define STRING_CMD_COLOR_COLOR       "Color"
#define STRING_CMD_COLOR_DEFINITION  "Definition"
#define STRING_CMD_COLOR_EXPLANATION "Use this command to see how colors are displayed by your terminal."
#define STRING_CMD_COLOR_16          "16-color usage (supports underline, bold text, bright background):"
#define STRING_CMD_COLOR_256         "256-color usage (supports underline):"
#define STRING_CMD_COLOR_YOURS       "Your sample:"
#define STRING_CMD_COLOR_BASIC       "Basic colors"
#define STRING_CMD_COLOR_EFFECTS     "Effects"
#define STRING_CMD_COLOR_CUBE        "Color cube rgb"
#define STRING_CMD_COLOR_RAMP        "Gray ramp"
#define STRING_CMD_COLOR_TRY         "Try running '{1}'."
#define STRING_CMD_COLOR_OFF         "Color is currently turned off in your .taskrc file.  To enable color, remove the line 'color=off', or change the 'off' to 'on'."
#define STRING_CMD_CONFIG_USAGE      "Change settings in the task configuration"
#define STRING_CMD_CONFIG_CONFIRM    "Are you sure you want to change the value of '{1}' from '{2}' to '{3}'?"
#define STRING_CMD_CONFIG_CONFIRM2   "Are you sure you want to add '{1}' with a value of '{2}'?"
#define STRING_CMD_CONFIG_CONFIRM3   "Are you sure you want to remove '{1}'?"
#define STRING_CMD_CONFIG_NO_ENTRY   "No entry named '{1}' found."
#define STRING_CMD_CONFIG_FILE_MOD   "Config file {1} modified."
#define STRING_CMD_CONFIG_NO_NAME    "Specify the name of a config variable to modify."
#define STRING_CMD_HCONFIG_USAGE     "Lists all supported configuration variables, for completion purposes"
#define STRING_CMD_CONTEXT_USAGE     "Set and define contexts (default filters)"
#define STRING_CMD_CONTEXT_DEF_SUCC  "Context '{1}' defined. Use 'task context {1}' to activate."
#define STRING_CMD_CONTEXT_DEF_FAIL  "Context '{1}' not defined."
#define STRING_CMD_CONTEXT_DEF_USAG  "Both context name and its definition must be provided."
#define STRING_CMD_CONTEXT_DEF_ABRT  "Context definiton aborted."
#define STRING_CMD_CONTEXT_DEF_ABRT2 "Filter validation failed: {1}"
#define STRING_CMD_CONTEXT_DEF_CONF  "The filter '{1}' matches 0 pending tasks. Do you wish to continue?"
#define STRING_CMD_CONTEXT_DEF_INVLD "The name '{1}' is reserved and not allowed to use as a context name."
#define STRING_CMD_CONTEXT_DEL_SUCC  "Context '{1}' deleted."
#define STRING_CMD_CONTEXT_DEL_FAIL  "Context '{1}' not deleted."
#define STRING_CMD_CONTEXT_DEL_USAG  "Context name needs to be specified."
#define STRING_CMD_CONTEXT_LIST_EMPT "No contexts defined."
#define STRING_CMD_CONTEXT_SET_NFOU  "Context '{1}' not found."
#define STRING_CMD_CONTEXT_SET_SUCC  "Context '{1}' set. Use 'task context none' to remove."
#define STRING_CMD_CONTEXT_SET_FAIL  "Context '{1}' not applied."
#define STRING_CMD_CONTEXT_SHOW_EMPT "No context is currently applied."
#define STRING_CMD_CONTEXT_SHOW      "Context '{1}' with filter '{2}' is currently applied."
#define STRING_CMD_CONTEXT_NON_SUCC  "Context unset."
#define STRING_CMD_CONTEXT_NON_FAIL  "Context not unset."
#define STRING_CMD_HCONTEXT_USAGE    "Lists all supported contexts, for completion purposes"
#define STRING_CMD_CUSTOM_MISMATCH   "There are different numbers of columns and labels for report '{1}'."
#define STRING_CMD_CUSTOM_SHOWN      "{1} affichées"
#define STRING_CMD_CUSTOM_COUNT      "1 tâche"
#define STRING_CMD_CUSTOM_COUNTN     "{1} tâches"
#define STRING_CMD_CUSTOM_TRUNCATED  "tronquées sur {1} lignes"
#define STRING_CMD_TIMESHEET_USAGE   "Résumé hebdomadaire des tâches terminées et démarrées"
#define STRING_CMD_TIMESHEET_STARTED "Started ({1} tasks)"
#define STRING_CMD_TIMESHEET_DONE    "Completed ({1} tasks)"
#define STRING_CMD_CAL_USAGE         "Shows a calendar, with due tasks marked"
#define STRING_CMD_CAL_BAD_MONTH     "Argument '{1}' is not a valid month."
#define STRING_CMD_CAL_BAD_ARG       "Could not recognize argument '{1}'."
#define STRING_CMD_CAL_LABEL_DATE    "Date"
#define STRING_CMD_CAL_LABEL_HOL     "Holiday"
#define STRING_CMD_CAL_SUN_MON       "The 'weekstart' configuration variable may only contain 'Sunday' or 'Monday'."
#define STRING_CMD_CALC_USAGE        "Calculator"

// These four blocks can be replaced, but the number of lines must not change.
#define STRING_EDIT_HEADER_1         "La commande 'task <id> edit' vous permet de modifier tous les aspects d'une tâche"
#define STRING_EDIT_HEADER_2         "en utilisant un éditeur de texte. Ci-dessous sont listés toutes les caractéristiques de la tâche."
#define STRING_EDIT_HEADER_3         "Modifiez à votre gré, et quand vous enregistrerez et quitterez votre éditeur de text,"
#define STRING_EDIT_HEADER_4         "Taskwarrior lira ce fichier, déterminera ce qui a changé et appliquera"
#define STRING_EDIT_HEADER_5         "ces changements. Si vous quittez votre édteur sans enregistrer"
#define STRING_EDIT_HEADER_6         " ou modifier, Taskwarrior ne fera rien."

#define STRING_EDIT_HEADER_7         "Les lignes commençant par # représentent les données que vous ne puvez changer, comme les ID."
#define STRING_EDIT_HEADER_8         "Si vous devenez trop prolifique en éditant, Taskwarrior vous renverra"
#define STRING_EDIT_HEADER_9         "dans l'éditeur pour réessayer."

#define STRING_EDIT_HEADER_10        "Si vous vous trouvez dans une boucle infinie, à rééditer le même fichier,"
#define STRING_EDIT_HEADER_11        "quitter simplement l'éditeur sans faire aucun changements.  Taskwarrior le détectera"
#define STRING_EDIT_HEADER_12        "et arrêtera l'édition."

#define STRING_EDIT_HEADER_13        "Les annotations sont de cette forme : <date> -- <text> et il peut y en avoir n'importe quel nombre."
#define STRING_EDIT_HEADER_14        "Le séparateur ' -- ' entre les champs de date et de texte ne devrai pas être supprimé."
#define STRING_EDIT_HEADER_15        "Il y a un champs vide ci-dessous pour ajouter une annotation facilement."

// Feedback
#define STRING_FEEDBACK_NO_TASKS     "No tasks."
#define STRING_FEEDBACK_NO_TASKS_SP  "No tasks specified."
#define STRING_FEEDBACK_NO_MATCH     "No matches."
#define STRING_FEEDBACK_TASKS_SINGLE "(1 task)"
#define STRING_FEEDBACK_TASKS_PLURAL "({1} tasks)"
#define STRING_FEEDBACK_DELETED      "{1} will be deleted."
#define STRING_FEEDBACK_DEP_SET      "Dependencies will be set to '{1}'."
#define STRING_FEEDBACK_DEP_MOD      "Dependencies will be changed from '{1}' to '{2}'."
#define STRING_FEEDBACK_DEP_DEL      "Dependencies '{1}' deleted."
#define STRING_FEEDBACK_DEP_WAS_SET  "Dependencies set to '{1}'."
#define STRING_FEEDBACK_DEP_WAS_MOD  "Dependencies changed from '{1}' to '{2}'."
#define STRING_FEEDBACK_ATT_SET      "{1} will be set to '{2}'."
#define STRING_FEEDBACK_ATT_MOD      "{1} will be changed from '{2}' to '{3}'."
#define STRING_FEEDBACK_ATT_DEL      "{1} deleted."
#define STRING_FEEDBACK_ATT_DEL_DUR  "{1} deleted (duration: {2})."
#define STRING_FEEDBACK_ATT_WAS_SET  "{1} set to '{2}'."
#define STRING_FEEDBACK_ATT_WAS_MOD  "{1} changed from '{2}' to '{3}'."
#define STRING_FEEDBACK_ANN_ADD      "Annotation of '{1}' added."
#define STRING_FEEDBACK_ANN_DEL      "Annotation '{1}' deleted."
#define STRING_FEEDBACK_ANN_WAS_MOD  "Annotation changed to '{1}'."
#define STRING_FEEDBACK_NOP          "No changes will be made."
#define STRING_FEEDBACK_WAS_NOP      "No changes made."
#define STRING_FEEDBACK_TAG_NOCOLOR  "The 'nocolor' special tag will disable color rules for this task."
#define STRING_FEEDBACK_TAG_NONAG    "The 'nonag' special tag will prevent nagging when this task is modified."
#define STRING_FEEDBACK_TAG_NOCAL    "The 'nocal' special tag will keep this task off the 'calendar' report."
#define STRING_FEEDBACK_TAG_NEXT     "The 'next' special tag will boost the urgency of this task so it appears on the 'next' report."
#define STRING_FEEDBACK_TAG_VIRTUAL  "Virtual tags (including '{1}') are reserved and may not be added or removed."
#define STRING_FEEDBACK_UNBLOCKED    "Unblocked {1} '{2}'."
#define STRING_FEEDBACK_EXPIRED      "Tâche {1} '{2}' a expiré et a été supprimée."
#define STRING_FEEDBACK_BACKLOG_N    "Il y a des {1} changements locaux.  Synchronisation requise."
#define STRING_FEEDBACK_BACKLOG      "Il y a des {1} changements locaux.  Synchronisation requise."

// Task
#define STRING_TASK_NO_FF1           "Taskwarrior no longer supports file format 1, originally used between 27 November 2006 and 31 December 2007."
#define STRING_TASK_NO_FF2           "Taskwarrior no longer supports file format 2, originally used between 1 January 2008 and 12 April 2009."
#define STRING_TASK_NO_FF3           "Taskwarrior no longer supports file format 3, originally used between 23 March 2009 and 16 May 2009."
#define STRING_TASK_PARSE_UNREC_FF   "Unrecognized Taskwarrior file format or blank line in data."
#define STRING_TASK_DEPEND_ITSELF    "A task cannot be dependent on itself."
#define STRING_TASK_DEPEND_MISS_CREA "Could not create a dependency on task {1} - not found."
#define STRING_TASK_DEPEND_MISS_DEL  "Could not delete a dependency on task {1} - not found."
#define STRING_TASK_DEPEND_DUP       "La tâche {1} dépend déjà de la tâche {2}."
#define STRING_TASK_DEPEND_CIRCULAR  "Circular dependency detected and disallowed."
#define STRING_TASK_VALID_BLANK      "Cannot add a task that is blank."
#define STRING_TASK_VALID_BEFORE     "Warning: You have specified that the '{1}' date is after the '{2}' date."
#define STRING_TASK_VALID_REC_DUE    "A recurring task must also have a 'due' date."
#define STRING_TASK_SAFETY_VALVE     "This command has no filter, and will modify all (including completed and deleted) tasks.  Are you sure?"
#define STRING_TASK_SAFETY_FAIL      "Command prevented from running."
#define STRING_TASK_SAFETY_ALLOW     "You did not specify a filter, and with the 'allow.empty.filter' value, no action is taken."
#define STRING_TASK_INVALID_COL_TYPE "Unrecognized column type '{1}' for column '{2}'"

#endif
