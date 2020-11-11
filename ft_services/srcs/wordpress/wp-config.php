<?php
/**
 * The base configuration for WordPress
 *
 * The wp-config.php creation script uses this file during the
 * installation. You don't have to use the web site, you can
 * copy this file to "wp-config.php" and fill in the values.
 *
 * This file contains the following configurations:
 *
 * * MySQL settings
 * * Secret keys
 * * Database table prefix
 * * ABSPATH
 *
 * @link https://codex.wordpress.org/Editing_wp-config.php
 *
 * @package WordPress
 */

// ** MySQL settings - You can get this info from your web host ** //
/** The name of the database for WordPress */
define( 'DB_NAME', 'wordpdata' );

/** MySQL database username */
define( 'DB_USER', 'mamoussa' );

/** MySQL database password */
define( 'DB_PASSWORD', 'mamoussa' );

/** MySQL hostname */
define( 'DB_HOST', '10.99.99.99' );

/** Database Charset to use in creating database tables. */
define( 'DB_CHARSET', 'utf8mb4' );

/** The Database Collate type. Don't change this if in doubt. */
define( 'DB_COLLATE', '' );

/**#@+
 * Authentication Unique Keys and Salts.
 *
 * Change these to different unique phrases!
 * You can generate these using the {@link https://api.wordpress.org/secret-key/1.1/salt/ WordPress.org secret-key service}
 * You can change these at any point in time to invalidate all existing cookies. This will force all users to have to log in again.
 *
 * @since 2.6.0
 */
define( 'AUTH_KEY',         '(d#pLKC{7ynV[H+l@0<?RwV/1ahGPj!Z?2]uQc=2_gwYE|z.BXXQkgdo%sKj4+I)' );
define( 'SECURE_AUTH_KEY',  'fJ|R**2nE^zF[]Y5uT099<Z_KG8c-j1>j]bE8/-pFB?OA6{9bu|Y%gwL3}Rf]zr,' );
define( 'LOGGED_IN_KEY',    'ELIN{@.u:M/l9qxwR|r*<<su#<LC&lWy5Di17siB|1KbN*q%~TKR+!gTo#iMh2oL' );
define( 'NONCE_KEY',        '`!:) U2Zo+{P6``Sl.r^ABCQI9x~2y,OI:F{TJ&m=MWmWIs#*H0!anJuK7s{f0Dk' );
define( 'AUTH_SALT',        ' z&}[#U7%PB}Hq{0gmggL%}H;M.mw?j3b!9mIK7S`zfMx1JD]2W$Km##53i99Hk9' );
define( 'SECURE_AUTH_SALT', 'yM @vGnfwv(Q*JzP}8E7vx8YWmr>)CXc&F)Eqjy5t+aV#-Jjx<9xP!,!4XMAgw8j' );
define( 'LOGGED_IN_SALT',   'GPH}07d@,L|K]ZRiuz i~a>q}mi#a=Ca[dgTKpc3wE[cwv0&y_*FAdClSj1*a*/r' );
define( 'NONCE_SALT',       '7-)we%P[hz{h#JMpf_4}M<pQ[{P{6gpO{+Lo?OvGg~w|aAo~8/sKNs1;H]%-E`yM' );

/**#@-*/

/**
 * WordPress Database Table prefix.
 *
 * You can have multiple installations in one database if you give each
 * a unique prefix. Only numbers, letters, and underscores please!
 */
$table_prefix = 'wp_';

/**
 * For developers: WordPress debugging mode.
 *
 * Change this to true to enable the display of notices during development.
 * It is strongly recommended that plugin and theme developers use WP_DEBUG
 * in their development environments.
 *
 * For information on other constants that can be used for debugging,
 * visit the Codex.
 *
 * @link https://codex.wordpress.org/Debugging_in_WordPress
 */
define( 'WP_DEBUG', false );

/* That's all, stop editing! Happy publishing. */

/** Absolute path to the WordPress directory. */
if ( ! defined( 'ABSPATH' ) ) {
	define( 'ABSPATH', dirname( __FILE__ ) . '/' );
}

/** Sets up WordPress vars and included files. */
require_once( ABSPATH . 'wp-settings.php' );
