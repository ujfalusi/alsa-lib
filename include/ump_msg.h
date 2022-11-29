/* SPDX-License-Identifier: LGPL-2.1+ */
/**
 * \file include/ump_msg.h
 * \brief API library for ALSA rawmidi/UMP interface
 *
 * API library for ALSA rawmidi/UMP interface
 */

#ifndef __ALSA_UMP_MSG_H
#define __ALSA_UMP_MSG_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/** general UMP packet header in 32bit word */
typedef struct _snd_ump_msg_hdr {
#ifdef SNDRV_BIG_ENDIAN_BITFIELD
	uint8_t type:4;		/**< UMP packet type */
	uint8_t group:4;	/**< UMP Group */
	uint8_t status:4;	/**< Status */
	uint8_t channel:4;	/**< Channel */
	uint8_t byte1;		/**< First data byte */
	uint8_t byte2;		/**< Second data byte */
#else
	uint8_t byte2;		/**< Second data byte */
	uint8_t byte1;		/**< First data byte */
	uint8_t channel:4;	/**< Channel */
	uint8_t status:4;	/**< Status */
	uint8_t group:4;	/**< UMP Group */
	uint8_t type:4;		/**< UMP packet type */
#endif
} __attribute((packed)) snd_ump_msg_hdr_t;

/** MIDI 1.0 Note Off / Note On (32bit) */
typedef struct _snd_ump_msg_midi1_note {
#ifdef SNDRV_BIG_ENDIAN_BITFIELD
	uint8_t type:4;		/**< UMP packet type */
	uint8_t group:4;	/**< UMP Group */
	uint8_t status:4;	/**< Status */
	uint8_t channel:4;	/**< Channel */
	uint8_t note;		/**< Note (7bit) */
	uint8_t velocity;	/**< Velocity (7bit) */
#else
	uint8_t velocity;	/**< Velocity (7bit) */
	uint8_t note;		/**< Note (7bit) */
	uint8_t channel:4;	/**< Channel */
	uint8_t status:4;	/**< Status */
	uint8_t group:4;	/**< UMP Group */
	uint8_t type:4;		/**< UMP packet type */
#endif
} __attribute((packed)) snd_ump_msg_midi1_note_t;

/** MIDI 1.0 Poly Pressure (32bit) */
typedef struct _snd_ump_msg_midi1_paf {
#ifdef SNDRV_BIG_ENDIAN_BITFIELD
	uint8_t type:4;		/**< UMP packet type */
	uint8_t group:4;	/**< UMP Group */
	uint8_t status:4;	/**< Status */
	uint8_t channel:4;	/**< Channel */
	uint8_t note;		/** Note (7bit) */
	uint8_t data;		/** Pressure (7bit) */
#else
	uint8_t data;		/** Pressure (7bit) */
	uint8_t note;		/** Note (7bit) */
	uint8_t channel:4;	/**< Channel */
	uint8_t status:4;	/**< Status */
	uint8_t group:4;	/**< UMP Group */
	uint8_t type:4;		/**< UMP packet type */
#endif
} __attribute((packed)) snd_ump_msg_midi1_paf_t;

/** MIDI 1.0 Control Change (32bit) */
typedef struct _snd_ump_msg_midi1_cc {
#ifdef SNDRV_BIG_ENDIAN_BITFIELD
	uint8_t type:4;		/**< UMP packet type */
	uint8_t group:4;	/**< UMP Group */
	uint8_t status:4;	/**< Status */
	uint8_t channel:4;	/**< Channel */
	uint8_t index;		/** Control index (7bit) */
	uint8_t data;		/** Control data (7bit) */
#else
	uint8_t data;		/** Control data (7bit) */
	uint8_t index;		/** Control index (7bit) */
	uint8_t channel:4;	/**< Channel */
	uint8_t status:4;	/**< Status */
	uint8_t group:4;	/**< UMP Group */
	uint8_t type:4;		/**< UMP packet type */
#endif
} __attribute((packed)) snd_ump_msg_midi1_cc_t;

/** MIDI 1.0 Program Change (32bit) */
typedef struct _snd_ump_msg_midi1_program {
#ifdef SNDRV_BIG_ENDIAN_BITFIELD
	uint8_t type:4;		/**< UMP packet type */
	uint8_t group:4;	/**< UMP Group */
	uint8_t status:4;	/**< Status */
	uint8_t channel:4;	/**< Channel */
	uint8_t program;	/**< Program number (7bit) */
	uint8_t reserved;	/**< Unused */
#else
	uint8_t reserved;	/**< Unused */
	uint8_t program;	/**< Program number (7bit) */
	uint8_t channel:4;	/**< Channel */
	uint8_t status:4;	/**< Status */
	uint8_t group:4;	/**< UMP Group */
	uint8_t type:4;		/**< UMP packet type */
#endif
} __attribute((packed)) snd_ump_msg_midi1_program_t;

/** MIDI 1.0 Channel Pressure (32bit) */
typedef struct _snd_ump_msg_midi1_caf {
#ifdef SNDRV_BIG_ENDIAN_BITFIELD
	uint8_t type:4;		/**< UMP packet type */
	uint8_t group:4;	/**< UMP Group */
	uint8_t status:4;	/**< Status */
	uint8_t channel:4;	/**< Channel */
	uint8_t data;		/**< Pressure (7bit) */
	uint8_t reserved;	/**< Unused */
#else
	uint8_t reserved;	/**< Unused */
	uint8_t data;		/**< Pressure (7bit) */
	uint8_t channel:4;	/**< Channel */
	uint8_t status:4;	/**< Status */
	uint8_t group:4;	/**< UMP Group */
	uint8_t type:4;		/**< UMP packet type */
#endif
} __attribute((packed)) snd_ump_msg_midi1_caf_t;

/** MIDI 1.0 Pitch Bend (32bit) */
typedef struct _snd_ump_msg_midi1_pitchbend {
#ifdef SNDRV_BIG_ENDIAN_BITFIELD
	uint8_t type:4;		/**< UMP packet type */
	uint8_t group:4;	/**< UMP Group */
	uint8_t status:4;	/**< Status */
	uint8_t channel:4;	/**< Channel */
	uint8_t data_lsb;	/**< LSB of pitchbend (7bit) */
	uint8_t data_msb;	/**< MSB of pitchbend (7bit) */
#else
	uint8_t data_msb;	/**< MSB of pitchbend (7bit) */
	uint8_t data_lsb;	/**< LSB of pitchbend (7bit) */
	uint8_t channel:4;	/**< Channel */
	uint8_t status:4;	/**< Status */
	uint8_t group:4;	/**< UMP Group */
	uint8_t type:4;		/**< UMP packet type */
#endif
} __attribute((packed)) snd_ump_msg_midi1_pitchbend_t;

/** System Common and Real Time messages (32bit); no channel field */
typedef struct snd_ump_msg_system {
#ifdef SNDRV_BIG_ENDIAN_BITFIELD
	uint8_t type:4;		/**< UMP packet type */
	uint8_t group:4;	/**< UMP Group */
	uint8_t status;		/**< Status */
	uint8_t parm1;		/**< First parameter */
	uint8_t parm2;		/**< Second parameter */
#else
	uint8_t parm1;		/**< First parameter */
	uint8_t parm2;		/**< Second parameter */
	uint8_t status;		/**< Status */
	uint8_t group:4;	/**< UMP Group */
	uint8_t type:4;		/**< UMP packet type */
#endif
} __attribute((packed)) snd_ump_msg_system_t;

/** MIDI 1.0 UMP CVM (32bit) */
typedef union _snd_ump_msg_midi1 {
	snd_ump_msg_midi1_note_t	note_on;
	snd_ump_msg_midi1_note_t	note_off;
	snd_ump_msg_midi1_paf_t		poly_pressure;
	snd_ump_msg_midi1_cc_t		control_change;
	snd_ump_msg_midi1_program_t	program_change;
	snd_ump_msg_midi1_caf_t		channel_pressure;
	snd_ump_msg_midi1_pitchbend_t	pitchbend;
	snd_ump_msg_system_t		system;
	snd_ump_msg_hdr_t		hdr;
	uint32_t			raw;
} snd_ump_msg_midi1_t;

/** MIDI 2.0 Note-on/off attribute type */
enum {
	SND_UMP_MIDI2_NOTE_ATTR_NO_DATA		= 0x00,	/**< No attribute data */
	SND_UMP_MIDI2_NOTE_ATTR_MANUFACTURER	= 0x01,	/**< Manufacturer specific */
	SND_UMP_MIDI2_NOTE_ATTR_PROFILE		= 0x02,	/**< Profile specific */
	SND_UMP_MIDI2_NOTE_ATTR_PITCH79		= 0x03,	/**< Pitch 7.9 */
};

/* MIDI 2.0 Note Off / Note On (64bit) */
typedef struct _snd_ump_msg_midi2_note {
#ifdef SNDRV_BIG_ENDIAN_BITFIELD
	uint8_t type:4;		/**< UMP packet type */
	uint8_t group:4;	/**< UMP Group */
	uint8_t status:4;	/**< Status */
	uint8_t channel:4;	/**< Channel */
	uint8_t note;		/**< Note (7bit) */
	uint8_t attr_type;	/**< Attribute type */

	uint16_t velocity;	/**< Velocity (16bit) */
	uint16_t attr_data;	/**< Attribute data (16bit) */
#else
	uint8_t attr_type;	/**< Attribute type */
	uint8_t note;		/**< Note (7bit) */
	uint8_t channel:4;	/**< Channel */
	uint8_t status:4;	/**< Status */
	uint8_t group:4;	/**< UMP Group */
	uint8_t type:4;		/**< UMP packet type */

	uint16_t attr_data;	/**< Attribute data (16bit) */
	uint16_t velocity;	/**< Velocity (16bit) */
#endif
} __attribute((packed)) snd_ump_msg_midi2_note_t;

/** MIDI 2.0 Poly Pressure (64bit) */
typedef struct _snd_ump_msg_midi2_paf {
#ifdef SNDRV_BIG_ENDIAN_BITFIELD
	uint8_t type:4;		/**< UMP packet type */
	uint8_t group:4;	/**< UMP Group */
	uint8_t status:4;	/**< Status */
	uint8_t channel:4;	/**< Channel */
	uint8_t note;		/**< Note (7bit) */
	uint8_t reserved;	/**< Unused */

	uint32_t data;		/**< Pressure (32bit) */
#else
	uint8_t reserved;	/**< Unused */
	uint8_t note;		/**< Note (7bit) */
	uint8_t channel:4;	/**< Channel */
	uint8_t status:4;	/**< Status */
	uint8_t group:4;	/**< UMP Group */
	uint8_t type:4;		/**< UMP packet type */

	uint32_t data;		/**< Pressure (32bit) */
#endif
} __attribute((packed)) snd_ump_msg_midi2_paf_t;

/** MIDI 2.0 Per-Note Controller (64bit) */
typedef struct _snd_ump_msg_midi2_per_note_cc {
#ifdef SNDRV_BIG_ENDIAN_BITFIELD
	uint8_t type:4;		/**< UMP packet type */
	uint8_t group:4;	/**< UMP Group */
	uint8_t status:4;	/**< Status */
	uint8_t channel:4;	/**< Channel */
	uint8_t note;		/**< Note (7bit) */
	uint8_t index;		/**< Control index (8bit) */

	uint32_t data;		/**< Data (32bit) */
#else
	uint8_t index;		/**< Control index (8bit) */
	uint8_t note;		/**< Note (7bit) */
	uint8_t channel:4;	/**< Channel */
	uint8_t status:4;	/**< Status */
	uint8_t group:4;	/**< UMP Group */
	uint8_t type:4;		/**< UMP packet type */

	uint32_t data;		/**< Data (32bit) */
#endif
} __attribute((packed)) snd_ump_msg_midi2_per_note_cc_t;

/** MIDI 2.0 per-note management flag bits */
enum {
	SND_UMP_MIDI2_PNMGMT_RESET_CONTROLLERS	= 0x01,	/**< Reset (set) per-note controllers */
	SND_UMP_MIDI2_PNMGMT_DETACH_CONTROLLERS	= 0x02,	/**< Detach per-note controllers */
};

/** MIDI 2.0 Per-Note Management (64bit) */
typedef struct _snd_ump_msg_midi2_per_note_mgmt {
#ifdef SNDRV_BIG_ENDIAN_BITFIELD
	uint8_t type:4;		/**< UMP packet type */
	uint8_t group:4;	/**< UMP Group */
	uint8_t status:4;	/**< Status */
	uint8_t channel:4;	/**< Channel */
	uint8_t note;		/**< Note (7bit) */
	uint8_t flags;		/**< Option flags (8bit) */

	uint32_t reserved;	/**< Unused */
#else
	uint8_t flags;		/**< Option flags (8bit) */
	uint8_t note;		/**< Note (7bit) */
	uint8_t channel:4;	/**< Channel */
	uint8_t status:4;	/**< Status */
	uint8_t group:4;	/**< UMP Group */
	uint8_t type:4;		/**< UMP packet type */

	uint32_t reserved;	/**< Unused */
#endif
} __attribute((packed)) snd_ump_msg_midi2_per_note_mgmt_t;

/** MIDI 2.0 Control Change (64bit) */
typedef struct _snd_ump_msg_midi2_cc {
#ifdef SNDRV_BIG_ENDIAN_BITFIELD
	uint8_t type:4;		/**< UMP packet type */
	uint8_t group:4;	/**< UMP Group */
	uint8_t status:4;	/**< Status */
	uint8_t channel:4;	/**< Channel */
	uint8_t index;		/**< Control index (7bit) */
	uint8_t reserved;	/**< Unused */

	uint32_t data;		/**< Control data (32bit) */
#else
	uint8_t reserved;	/**< Unused */
	uint8_t index;		/**< Control index (7bit) */
	uint8_t channel:4;	/**< Channel */
	uint8_t status:4;	/**< Status */
	uint8_t group:4;	/**< UMP Group */
	uint8_t type:4;		/**< UMP packet type */

	uint32_t data;		/**< Control data (32bit) */
#endif
} __attribute((packed)) snd_ump_msg_midi2_cc_t;

/** MIDI 2.0 Registered Controller (RPN) / Assignable Controller (NRPN) (64bit) */
typedef struct _snd_ump_msg_midi2_rpn {
#ifdef SNDRV_BIG_ENDIAN_BITFIELD
	uint8_t type:4;		/**< UMP packet type */
	uint8_t group:4;	/**< UMP Group */
	uint8_t status:4;	/**< Status */
	uint8_t channel:4;	/**< Channel */
	uint8_t bank;		/**< Bank number (7bit) */
	uint8_t index;		/**< Control index (7bit) */

	uint32_t data;		/**< Data (32bit) */
#else
	uint8_t index;		/**< Control index (7bit) */
	uint8_t bank;		/**< Bank number (7bit) */
	uint8_t channel:4;	/**< Channel */
	uint8_t status:4;	/**< Status */
	uint8_t group:4;	/**< UMP Group */
	uint8_t type:4;		/**< UMP packet type */

	uint32_t data;		/**< Data (32bit) */
#endif
} __attribute((packed)) snd_ump_msg_midi2_rpn_t;

/** MIDI 2.0 Program Change (64bit) */
typedef struct _snd_ump_msg_midi2_program {
#ifdef SNDRV_BIG_ENDIAN_BITFIELD
	uint8_t type:4;		/**< UMP packet type */
	uint8_t group:4;	/**< UMP Group */
	uint8_t status:4;	/**< Status */
	uint8_t channel:4;	/**< Channel */
	uint16_t reserved:15;	/**< Unused */
	uint16_t bank_valid:1;	/**< Option flag: bank valid */

	uint8_t program;	/**< Program number (7bit) */
	uint8_t reserved2;	/**< Unused */
	uint8_t bank_msb;	/**< MSB of bank (8bit) */
	uint8_t bank_lsb;	/**< LSB of bank (7bit) */
#else
	uint16_t bank_valid:1;	/**< Option flag: bank valid */
	uint16_t reserved:15;	/**< Unused */
	uint8_t channel:4;	/**< Channel */
	uint8_t status:4;	/**< Status */
	uint8_t group:4;	/**< UMP Group */
	uint8_t type:4;		/**< UMP packet type */

	uint8_t bank_lsb;	/**< LSB of bank (7bit) */
	uint8_t bank_msb;	/**< MSB of bank (8bit) */
	uint8_t reserved2;	/**< Unused */
	uint8_t program;	/**< Program number (7bit) */
#endif
} __attribute((packed)) snd_ump_msg_midi2_program_t;

/** MIDI 2.0 Channel Pressure (64bit) */
typedef struct _snd_ump_msg_midi2_caf {
#ifdef SNDRV_BIG_ENDIAN_BITFIELD
	uint8_t type:4;		/**< UMP packet type */
	uint8_t group:4;	/**< UMP Group */
	uint8_t status:4;	/**< Status */
	uint8_t channel:4;	/**< Channel */
	uint16_t reserved;	/**< Unused */

	uint32_t data;		/** Data (32bit) */
#else
	uint16_t reserved;	/**< Unused */
	uint8_t channel:4;	/**< Channel */
	uint8_t status:4;	/**< Status */
	uint8_t group:4;	/**< UMP Group */
	uint8_t type:4;		/**< UMP packet type */

	uint32_t data;		/** Data (32bit) */
#endif
} __attribute((packed)) snd_ump_msg_midi2_caf_t;

/* MIDI 2.0 Pitch Bend (64bit) */
typedef struct _snd_ump_msg_midi2_pitchbend {
#ifdef SNDRV_BIG_ENDIAN_BITFIELD
	uint8_t type:4;		/**< UMP packet type */
	uint8_t group:4;	/**< UMP Group */
	uint8_t status:4;	/**< Status */
	uint8_t channel:4;	/**< Channel */
	uint16_t reserved;	/**< Unused */

	uint32_t data;		/** Data (32bit) */
#else
	uint16_t reserved;	/**< Unused */
	uint8_t channel:4;	/**< Channel */
	uint8_t status:4;	/**< Status */
	uint8_t group:4;	/**< UMP Group */
	uint8_t type:4;		/**< UMP packet type */

	uint32_t data;		/** Data (32bit) */
#endif
} __attribute((packed)) snd_ump_msg_midi2_pitchbend_t;

/* MIDI 2.0 Per-Note Pitch Bend (64bit) */
typedef struct _snd_ump_msg_midi2_per_note_pitchbend {
#ifdef __BIG_ENDIAN_BITFIELD
	uint8_t type:4;		/**< UMP packet type */
	uint8_t group:4;	/**< UMP Group */
	uint8_t status:4;	/**< Status */
	uint8_t channel:4;	/**< Channel */
	uint8_t note;		/**< Note (7bit) */
	uint8_t reserved;	/**< Unused */

	uint32_t data;		/**< Data (32bit) */
#else
	/* 0 */
	uint8_t reserved;	/**< Unused */
	uint8_t note;		/**< Note (7bit) */
	uint8_t channel:4;	/**< Channel */
	uint8_t status:4;	/**< Status */
	uint8_t group:4;	/**< UMP Group */
	uint8_t type:4;		/**< UMP packet type */

	uint32_t data;		/**< Data (32bit) */
#endif
} __attribute((packed)) snd_ump_msg_midi2_per_note_pitchbend_t;

/** MIDI2 UMP packet (64bit little-endian) */
typedef union _snd_ump_msg_midi2 {
	snd_ump_msg_midi2_note_t	note_on;
	snd_ump_msg_midi2_note_t	note_off;
	snd_ump_msg_midi2_paf_t		poly_pressure;
	snd_ump_msg_midi2_per_note_cc_t	per_note_acc;
	snd_ump_msg_midi2_per_note_cc_t	per_note_rcc;
	snd_ump_msg_midi2_per_note_mgmt_t per_note_mgmt;
	snd_ump_msg_midi2_cc_t		control_change;
	snd_ump_msg_midi2_rpn_t		rpn;
	snd_ump_msg_midi2_rpn_t		nrpn;
	snd_ump_msg_midi2_rpn_t		relative_rpn;
	snd_ump_msg_midi2_rpn_t		relative_nrpn;
	snd_ump_msg_midi2_program_t	program_change;
	snd_ump_msg_midi2_caf_t		channel_pressure;
	snd_ump_msg_midi2_pitchbend_t	pitchbend;
	snd_ump_msg_midi2_per_note_pitchbend_t per_note_pitchbend;
	snd_ump_msg_hdr_t		hdr;
	uint32_t			raw[2];
} snd_ump_msg_midi2_t;

/**
 * UMP message type
 */
enum {
	SND_UMP_MSG_TYPE_SYSTEM			= 0x01,	/* System messages */
	SND_UMP_MSG_TYPE_MIDI1_CHANNEL_VOICE	= 0x02,	/* MIDI 1.0 messages */
	SND_UMP_MSG_TYPE_DATA			= 0x03,	/* 7bit SysEx messages */
	SND_UMP_MSG_TYPE_MIDI2_CHANNEL_VOICE	= 0x04,	/* MIDI 2.0 messages */
	SND_UMP_MSG_TYPE_EXTENDED_DATA		= 0x05,	/* 8bit data message */
};

/**
 * UMP MIDI 1.0 / 2.0 message status code (4bit)
 */
enum {
	SND_UMP_MSG_PER_NOTE_RCC	= 0x0,
	SND_UMP_MSG_PER_NOTE_ACC	= 0x1,
	SND_UMP_MSG_RPN			= 0x2,
	SND_UMP_MSG_NRPN		= 0x3,
	SND_UMP_MSG_RELATIVE_RPN	= 0x4,
	SND_UMP_MSG_RELATIVE_NRPN	= 0x5,
	SND_UMP_MSG_PER_NOTE_PITCHBEND	= 0x6,
	SND_UMP_MSG_NOTE_OFF		= 0x8,
	SND_UMP_MSG_NOTE_ON		= 0x9,
	SND_UMP_MSG_POLY_PRESSURE	= 0xa,
	SND_UMP_MSG_CONTROL_CHANGE	= 0xb,
	SND_UMP_MSG_PROGRAM_CHANGE	= 0xc,
	SND_UMP_MSG_CHANNEL_PRESSURE	= 0xd,
	SND_UMP_MSG_PITCHBEND		= 0xe,
	SND_UMP_MSG_PER_NOTE_MGMT	= 0xf,
};

/**
 * MIDI System / Realtime message status code (8bit)
 */
enum {
	SND_UMP_MSG_REALTIME		= 0xf0, /* mask */
	SND_UMP_MSG_SYSEX_START		= 0xf0,
	SND_UMP_MSG_MIDI_TIME_CODE	= 0xf1,
	SND_UMP_MSG_SONG_POSITION	= 0xf2,
	SND_UMP_MSG_SONG_SELECT		= 0xf3,
	SND_UMP_MSG_TUNE_REQUEST	= 0xf6,
	SND_UMP_MSG_SYSEX_END		= 0xf7,
	SND_UMP_MSG_TIMING_CLOCK	= 0xf8,
	SND_UMP_MSG_START		= 0xfa,
	SND_UMP_MSG_CONTINUE		= 0xfb,
	SND_UMP_MSG_STOP		= 0xfc,
	SND_UMP_MSG_ACTIVE_SENSING	= 0xfe,
	SND_UMP_MSG_RESET		= 0xff,
};

/**
 * \brief get UMP status (4bit) from 32bit UMP message header
 */
static inline uint8_t snd_ump_msg_hdr_status(uint32_t ump)
{
	return (ump >> 20) & 0x0f;
}

/**
 * \brief get UMP channel (4bit) from 32bit UMP message header
 */
static inline uint8_t snd_ump_msg_hdr_channel(uint32_t ump)
{
	return (ump >> 16) & 0x0f;
}

/**
 * \brief get UMP message type (4bit) from 32bit UMP message header
 */
static inline uint8_t snd_ump_msg_hdr_type(uint32_t ump)
{
	return (ump >> 28);
}

/**
 * \brief get UMP group (4bit) from 32bit UMP message header
 */
static inline uint8_t snd_ump_msg_hdr_group(uint32_t ump)
{
	return (ump >> 24) & 0x0f;
}

/**
 * \brief get UMP status from UMP packet pointer
 */
static inline uint8_t snd_ump_msg_status(const uint32_t *ump)
{
	return snd_ump_msg_hdr_status(*ump);
}

/**
 * \brief get UMP channel from UMP packet pointer
 */
static inline uint8_t snd_ump_msg_channel(const uint32_t *ump)
{
	return snd_ump_msg_hdr_channel(*ump);
}

/**
 * \brief get UMP message type from UMP packet pointer
 */
static inline uint8_t snd_ump_msg_type(const uint32_t *ump)
{
	return snd_ump_msg_hdr_type(*ump);
}

/**
 * \brief get UMP group from UMP packet pointer
 */
static inline uint8_t snd_ump_msg_group(const uint32_t *ump)
{
	return snd_ump_msg_hdr_group(*ump);
}

#ifdef __cplusplus
}
#endif

#endif /* __ALSA_UMP_MSG_H */
